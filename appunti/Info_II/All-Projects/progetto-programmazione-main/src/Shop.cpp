#include "Shop.hpp"

Shop::Shop(){}

//Crea la finestra dello shop
void Shop::createShopWin(WINDOW * ShopWin) {
    box(ShopWin, 0, 0);
    getmaxyx(ShopWin, yMax, xMax);
    refresh();
    wrefresh(ShopWin);
}


//ciclo di gioco dello shop
bool Shop::runShop(WINDOW * shopWin, WINDOW * gameWin, bool reset, Game game, PowerUp &powerup)  {    
    
    //setto il player
    Player player(xMax, yMax, '@');
    player.setX(xMax/2);
    player.setY(6);
    player.drawCharacterPlayer(shopWin, powerup);

    bool Keepgoing = true;
    bool playerDied = true;

    while(Keepgoing) {     

        mvwprintw(shopWin, 22, 160, "Press TAB to play");

        int userInput = getch(); 
        switch(userInput) {
            case KEY_LEFT:
                player.moveLeftShop();
                break;
            case KEY_RIGHT:
                player.moveRightShop();
                break;  
            case KEY_UP:
                player.moveUpShop();
                break;
            case KEY_DOWN:
                player.moveDownShop();
                break;
            //se premi tab inizia il gioco
            case 9: 
                game.createGameWin(gameWin);
                wclear(shopWin);
                wrefresh(shopWin);
                delwin(shopWin);
                playerDied = game.run(gameWin, reset, powerup);  //playerDied ritorna false se esce dal gioco tramite salvataggio, true se muore
                Keepgoing = false;
                break;
        }
        //se muore ed esce dal ciclo di gioco vai alla schermata della morte 
        if(!Keepgoing && playerDied) {
            bool restart = DeathWindow();
            return restart;
        } 
       
        else {
        //senno continua con il ciclo dello shop
            powerup.createBonus(shopWin);    
            coinsWindow(shopWin, powerup);

            int y = player.getY();
            int x = player.getX();

            PayDecrease(shopWin, x, y, powerup, player); //Paga e decrementa i soldi
            powerup.setActiveStartPowerUps();    //setta i potenziamenti attivi dallo start cioè vita aumentata e danno aumentato

            player.drawCharacterPlayer(shopWin, powerup);
            wrefresh(shopWin);
            player.deleteCharacter(shopWin);
            napms(25); 
        }  
    }
    return false;
}


void Shop::PayDecrease(WINDOW *win , int x, int y, PowerUp &powerup, Player  &player){
    bool stop = true;
    //cicla tutti i bonus 
    for(int i = 0; i < MAX_BONUS; i++){   
        //se entra in un box dei bonus, ne può comprare e ha abbastanza soldi
        if(x < powerup.bonus[i].xRBox && x > powerup.bonus[i].xLBox  && y == powerup.bonus[i].yBox  && powerup.bonus[i].BuyableQuantity != 0 && powerup.bonus[i].Cost <= powerup.getCoins()){

            //crea finestra per comprare
            WINDOW * boxChoice = newwin(14, 100, 5, 43);
            shopChoiceWindow(boxChoice, i);
            wrefresh(boxChoice);    
            //ciclo per comprare 
            while(stop){
                int Input = getch();
                    switch (Input){
                    //compra bonus
                    case 9:
                        powerup.addCoins(-powerup.bonus[i].Cost);//decrementa soldi
                        powerup.setBuyableBonus(powerup.bonus[i].BuyableQuantity - 1, i);//decrementa le quantità comprabili
                        powerup.setOwnedBonus(i);//aumenta la quantità possessa

                        stop = false;
                        werase(boxChoice);
                        wrefresh(boxChoice);
                        delwin(boxChoice);
                        break;
                    //non compra bonus
                    case 27:
                        stop = false;
                        werase(boxChoice);
                        wrefresh(boxChoice);
                        delwin(boxChoice);
                        break;      
                    }  
                    }  
            player.moveDownShop();
            player.moveDownShop(); 
            player.moveDownShop();
            player.moveDownShop();              
            }  
        }
    }   

//crea finestra per i soldi
void Shop :: coinsWindow(WINDOW * shopWin, PowerUp powerup){
    WINDOW * boxMoney = subwin(shopWin, 3, 7, 0, 0); 
    box(boxMoney, 0, 0); 
    wrefresh(boxMoney);  
    mvwprintw(shopWin, 1, 1, "     ");
    mvwprintw(shopWin, 1, 1, "%d$", powerup.getCoins());
}



//crea schermata dopo la morte. ritorna true se vuole rigiocare, false se vuole uscire
bool Shop :: DeathWindow(){
    init_pair(6, COLOR_WHITE, COLOR_GREEN);  
    init_pair(7, COLOR_WHITE, COLOR_RED);  
    init_pair(3, COLOR_RED, COLOR_BLACK); 
    bool stop = true;
    int start_y = 3;
    int start_x = 93;
    WINDOW * AfterDeathChoice= newwin(24, 186, 0, 0);
                box(AfterDeathChoice, 0, 0);  
                mvwprintw(AfterDeathChoice, start_y, start_x-10,     "     _________     ");
                mvwprintw(AfterDeathChoice, start_y + 1, start_x-10, "   //         \\     ");
                mvwprintw(AfterDeathChoice, start_y + 2, start_x-10, "  ||   X   X   ||  ");
                mvwprintw(AfterDeathChoice, start_y + 3, start_x-10, "   \\    -    //   ");
                mvwprintw(AfterDeathChoice, start_y + 4, start_x-10, "      \\___//      ");
                wattron(AfterDeathChoice, COLOR_PAIR(3));
                mvwprintw(AfterDeathChoice, start_y + 8,  start_x-32, "  SSSS   EEEEE  IIIII     M     M   OOO   RRRR   TTTTT  OOO   ");
                mvwprintw(AfterDeathChoice, start_y + 9,  start_x-32, " S       E        I       MM   MM  O   O  R   R    T   O   O  ");
                mvwprintw(AfterDeathChoice, start_y + 10, start_x-32, "  SSSS   EEE      I       M M M M  O   O  RRRR     T   O   O  ");
                mvwprintw(AfterDeathChoice, start_y + 11, start_x-32, "      S  E        I       M  M  M  O   O  R  R     T   O   O  ");
                mvwprintw(AfterDeathChoice, start_y + 12, start_x-32, " SSSS    EEEEE  IIIII     M     M   OOO   R   RR   T    OOO   ");
                wattroff(AfterDeathChoice, COLOR_PAIR(3));
                mvwprintw(AfterDeathChoice, start_y + 15, start_x-14, "Do you want to start again?" );
                wattron(AfterDeathChoice, COLOR_PAIR(6));
                mvwprintw(AfterDeathChoice, start_y + 17, 43, "Yes/TAB" );
                wattroff(AfterDeathChoice, COLOR_PAIR(6));
                wattron(AfterDeathChoice, COLOR_PAIR(7));
                mvwprintw(AfterDeathChoice, start_y + 17, 128, "No, quit the game/ESC" );
                wattroff(AfterDeathChoice, COLOR_PAIR(7));
                wrefresh(AfterDeathChoice);
        bool choice;
        while(stop){
            int Input = getch();
                switch(Input){
                    case 9:
                        stop = false;
                        choice = true;
                        werase(AfterDeathChoice);
                        wrefresh(AfterDeathChoice);
                        delwin(AfterDeathChoice);
                        break;
                    case 27:
                        stop = false;
                        choice = false;
                        werase(AfterDeathChoice);
                        wrefresh(AfterDeathChoice);
                        delwin(AfterDeathChoice);
                        break;      
                }  
        }  
        return choice;
}


//crea le schermate per ogni bonus
void Shop :: shopChoiceWindow(WINDOW * boxChoice, int i){
      
    box(boxChoice, 0, 0);
    mvwprintw(boxChoice, 10, 42, "Are you sure?");

    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    wattron(boxChoice, COLOR_PAIR(1));
    mvwprintw(boxChoice, 12, 21, "Yes/TAB");
    wattroff(boxChoice, COLOR_PAIR(1)); 

    init_pair(3,COLOR_RED, COLOR_BLACK);
    wattron(boxChoice, COLOR_PAIR(3));
    mvwprintw(boxChoice, 12, 71, "No/ESC");
    wattroff(boxChoice, COLOR_PAIR(3)); 

    if(i == 0){
        wattron(boxChoice, COLOR_PAIR(1));
        mvwprintw(boxChoice, 3,40,"       ::         ");
        mvwprintw(boxChoice, 4,40,"       ::         ");
        mvwprintw(boxChoice, 5,40,"   ::::::::::      ");
        mvwprintw(boxChoice, 6,40,"       ::         ");
        mvwprintw(boxChoice, 7,40,"       ::         ");
        wattroff(boxChoice, COLOR_PAIR(1));
        mvwprintw(boxChoice, 4, 10, "The increased life");
        mvwprintw(boxChoice, 5, 10, "will give you 100");
        mvwprintw(boxChoice, 6, 10, "extra health points.");
    }

    if(i == 6){
        wattron(boxChoice, COLOR_PAIR(3));
        mvwprintw(boxChoice, 2, 44, "  **   **  ");
        mvwprintw(boxChoice, 3, 44, " **** **** ");
        mvwprintw(boxChoice, 4, 44, "***********");
        mvwprintw(boxChoice, 5, 44," ********* ");
        mvwprintw(boxChoice, 6, 44,"  *******  ");
        mvwprintw(boxChoice, 7, 44,"    ***    ");
        mvwprintw(boxChoice, 8, 44,"     *     ");
        wattroff(boxChoice, COLOR_PAIR(3));
        mvwprintw(boxChoice, 4, 10, "If you have one");
        mvwprintw(boxChoice, 5, 10, "you can respawn");
        mvwprintw(boxChoice, 6, 10, "once you die.");
    }

    if(i == 4){
        wattron(boxChoice, COLOR_PAIR(5));
        mvwprintw(boxChoice, 3, 46, "   ^   ");
        mvwprintw(boxChoice, 4, 46, "  / \\  ");
        mvwprintw(boxChoice, 5, 46, " /   \\ ");
        mvwprintw(boxChoice, 6, 46, "-------");
        mvwprintw(boxChoice, 7, 46, "  | |  ");
        mvwprintw(boxChoice, 8, 46, "  | |  ");
        wattroff(boxChoice, COLOR_PAIR(5));
        mvwprintw(boxChoice, 4, 10, "If you activate it");
        mvwprintw(boxChoice, 5, 10, "your jump height");
        mvwprintw(boxChoice, 6, 10, "will boost.");
    }

    if(i == 1){
        wattron(boxChoice, COLOR_PAIR(3));
        mvwprintw(boxChoice, 2, 33, "   _  ___________________,");
        mvwprintw(boxChoice, 3, 33, "   \\ \\@([            ]_________)");
        mvwprintw(boxChoice, 4, 33, "    \\ \\@([            ]_________)");
        mvwprintw(boxChoice, 5, 33, "   _/\\----[________]");
        mvwprintw(boxChoice, 6, 33, "  //    / ((    )");
        mvwprintw(boxChoice, 7, 33, " /_____|");
        mvwprintw(boxChoice, 8, 33, "\\_____/");
        wattroff(boxChoice, COLOR_PAIR(3));
        mvwprintw(boxChoice, 4, 10, "The increased damage");
        mvwprintw(boxChoice, 5, 10, "will boost your");
        mvwprintw(boxChoice, 6, 10, "gun damage by 30.");
    }

    if(i == 3){
        wattron(boxChoice, COLOR_PAIR(5));
        mvwprintw(boxChoice, 3, 40, "____________.");
        mvwprintw(boxChoice, 4, 40, ":::::;;;;;;||::::=====:");
        mvwprintw(boxChoice, 5, 36, "|:::::::::|:::::||:::=====:");
        mvwprintw(boxChoice, 6, 36, "|::::::::;|:|^^|^^");
        mvwprintw(boxChoice, 7, 36, "|:::::::  | |");
        mvwprintw(boxChoice, 8, 44, "__| |");
        wattroff(boxChoice, COLOR_PAIR(5));
        mvwprintw(boxChoice, 4, 10, "If you activate it");
        mvwprintw(boxChoice, 5, 10, "your shooting cooldown");
        mvwprintw(boxChoice, 6, 10, "will decrease.");
    }
    
    if(i == 2){
    init_pair(12, COLOR_BLUE, COLOR_BLACK);
    wattron(boxChoice, COLOR_PAIR(12));
    mvwprintw(boxChoice, 3, 41, "      _______");
    mvwprintw(boxChoice, 4, 41, "     /   |   \\");
    mvwprintw(boxChoice, 5, 41, "    /____|____\\");
    mvwprintw(boxChoice, 6, 41, "    \\    |    /");
    mvwprintw(boxChoice, 7, 41, "     \\   |   /");
    mvwprintw(boxChoice, 8, 41, "      \\_____/");
    wattroff(boxChoice, COLOR_PAIR(12));
    mvwprintw(boxChoice, 4, 10, "If you activate it");
    mvwprintw(boxChoice, 5, 10, "you won't get damage");
    mvwprintw(boxChoice, 6, 10, "for 5 times.");
    }

    if(i == 5){
        init_pair(13, COLOR_MAGENTA, COLOR_BLACK);
        wattron(boxChoice, COLOR_PAIR(13));
        mvwprintw(boxChoice, 4, 35, " _______/]_________[\\___________");
        mvwprintw(boxChoice, 5, 35, "|    ____     ___|---------------|=====");
        mvwprintw(boxChoice, 6, 35, "|_ /      /  /_|  |");
        mvwprintw(boxChoice, 7, 35, "         /_/    \\_/");
        wattroff(boxChoice, COLOR_PAIR(13));
        mvwprintw(boxChoice, 4, 10, "If you activate it");
        mvwprintw(boxChoice, 5, 10, "your shooting range");
        mvwprintw(boxChoice, 6, 10, "and your damage ");
        mvwprintw(boxChoice, 7, 10, "will increase.");
    }
}

