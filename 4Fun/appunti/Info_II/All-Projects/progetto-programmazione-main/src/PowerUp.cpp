#include "PowerUp.hpp"

//costruttore
PowerUp::PowerUp() {
    bonus[0].Cost = 25;     //vita aumentata
    bonus[0].BuyableQuantity = 10;
    bonus[0].xRBox = 26.25 ;
    bonus[0].xLBox = 20.25 ;
    bonus[0].yBox = 10; 
    bonus[0].OwnedQuantity = 0;
    bonus[0].IsActive = false;
    strcpy(bonus[0].name, "Extra health");
    

    bonus[1].Cost = 15 ;    //danno aumentato
    bonus[1].BuyableQuantity = 15;
    bonus[1].xRBox = 49.5;
    bonus[1].xLBox = 43.5;
    bonus[1].yBox = 13;
    bonus[1].OwnedQuantity = 0;
    bonus[1].IsActive = false;
    strcpy(bonus[1].name, "Extra damage");

    bonus[2].Cost = 50 ;    //scudo
    bonus[2].BuyableQuantity = -1;
    bonus[2].xRBox = 72.75;
    bonus[2].xLBox = 66.75 ;
    bonus[2].yBox = 16 ;
    bonus[2].OwnedQuantity = 0;
    bonus[2].IsActive = false;
    strcpy(bonus[2].name, "Shield");
    bonus[2].singleEntry = true;

    bonus[3].Cost = 60 ;    //minigun
    bonus[3].BuyableQuantity = 10;
    bonus[3].xRBox = 96;
    bonus[3].xLBox = 90;
    bonus[3].yBox = 19 ;
    bonus[3].OwnedQuantity = 0;
    bonus[3].IsActive = false;
    strcpy(bonus[3].name, "Minigun");
    bonus[3].singleEntry = true;

    bonus[4].Cost = 45 ;    //super salto
    bonus[4].BuyableQuantity = -1;
    bonus[4].xRBox = 116.25;
    bonus[4].xLBox = 110.25 ;
    bonus[4].yBox = 16 ;
    bonus[4].OwnedQuantity = 0;
    bonus[4].IsActive = false;
    strcpy(bonus[4].name, "Super jump");

    bonus[5].Cost = 20 ;    //colpi potenti
    bonus[5].BuyableQuantity = -1;
    bonus[5].xRBox = 142.5;
    bonus[5].xLBox = 136.5 ;
    bonus[5].yBox = 13 ;
    bonus[5].OwnedQuantity = 0;
    bonus[5].IsActive = false;
    strcpy(bonus[5].name, "Power shots");
    bonus[5].singleEntry = true;

    bonus[6].Cost = 35 ;    //seconda vita
    bonus[6].BuyableQuantity = 3;
    bonus[6].xRBox = 165.75;
    bonus[6].xLBox = 159.75 ;
    bonus[6].yBox = 10;
    bonus[6].OwnedQuantity = 0;
    bonus[6].IsActive = false; 
    strcpy(bonus[6].name, "Second life");

    coins = 0;
}

//crea tutti box e le scritte nello shop
void PowerUp::createBonus(WINDOW * shopWin){

    WINDOW * box0 = subwin(shopWin, 3, 6, bonus[0].yBox - 1, bonus[0].xLBox);   
    box(box0, 0, 0);  
    wrefresh(box0);  

    WINDOW * box1 = subwin(shopWin, 3, 6, bonus[1].yBox - 1, bonus[1].xLBox);    
    box(box1, 0, 0);  
    wrefresh(box1);     

    WINDOW * box2 = subwin(shopWin, 3, 6, bonus[2].yBox - 1, bonus[2].xLBox);   
    box(box2, 0, 0); 
    wrefresh(box2);     

    WINDOW * box4 = subwin(shopWin, 3, 6, bonus[3].yBox - 1, bonus[3].xLBox);    
    box(box4, 0, 0);      
    wrefresh(box4);     

    WINDOW * box5 = subwin(shopWin, 3, 6, bonus[4].yBox - 1, bonus[4].xLBox);    
    box(box5, 0, 0);      
    wrefresh(box5);     

    WINDOW * box6 = subwin(shopWin, 3, 6, bonus[5].yBox - 1, bonus[5].xLBox);    
    box(box6, 0, 0);      
    wrefresh(box6);     

    WINDOW * box7 = subwin(shopWin, 3, 6, bonus[6].yBox - 1, bonus[6].xLBox);    
    box(box7, 0, 0);      
    wrefresh(box7); 
    
    //vita aumentata
    mvwprintw(shopWin, bonus[0].yBox - 3, bonus[0].xLBox, " Extra");
    mvwprintw(shopWin, bonus[0].yBox - 2, bonus[0].xLBox, "Health ");

    //danno aumentato
    mvwprintw(shopWin, bonus[1].yBox - 3, bonus[1].xLBox, "Extra");
    mvwprintw(shopWin, bonus[1].yBox - 2, bonus[1].xLBox, "Damage");
    
    //scudo
    mvwprintw(shopWin, bonus[2].yBox - 2, bonus[2].xLBox, "Shield");

    //minigun
    mvwprintw(shopWin, bonus[3].yBox - 2, bonus[3].xLBox, "Minigun");

    //super salto
    mvwprintw(shopWin, bonus[4].yBox - 3, bonus[4].xLBox, "Super");
    mvwprintw(shopWin, bonus[4].yBox - 2, bonus[4].xLBox, " Jump ");

    //colpi potenti
    mvwprintw(shopWin, bonus[5].yBox - 3, bonus[5].xLBox, "Power");
    mvwprintw(shopWin, bonus[5].yBox - 2, bonus[5].xLBox, "Shots");

    //seconda vita 
    mvwprintw(shopWin, bonus[6].yBox - 3, bonus[6].xLBox, "Second");
    mvwprintw(shopWin, bonus[6].yBox - 2, bonus[6].xLBox, " Life");

    //aggiungo quantita 
    for(int i = 0; i < MAX_BONUS ; i++){
        if(bonus[i].BuyableQuantity == -1)
            mvwprintw(shopWin, bonus[i].yBox, bonus[i].xLBox + 2, "oo" );
        else{
            mvwprintw(shopWin, bonus[i].yBox, bonus[i].xLBox + 2, "%d ", bonus[i].BuyableQuantity);
        }
           
    }

    //aggiungo costi
    for(int i = 0; i < MAX_BONUS ; i++){
        mvwprintw(shopWin, bonus[i].yBox + 2, bonus[i].xLBox + 1, "%d$", bonus[i].Cost);
    }
    wrefresh(shopWin);
} 


void PowerUp :: setActiveStartPowerUps()
{
    //attiva vita aumentata 
    if(bonus[0].OwnedQuantity > 0){
        bonus[0].IsActive = true;
    } else bonus[0].IsActive = false;

    //attiva danno aumentato    
    if(bonus[1].OwnedQuantity > 0){
        bonus[1].IsActive = true;
    } else bonus[1].IsActive = false;

    //attiva seconda vita
    if(bonus[6].OwnedQuantity > 0){
        bonus[6].IsActive = true;
    } else bonus[6].IsActive = false;
}


void PowerUp :: setBuyableBonus(int x, int i)
{
    if(bonus[i].BuyableQuantity!=-1)
        bonus[i].BuyableQuantity = x;
}


void PowerUp :: setOwnedBonus(int i)
{
        bonus[i].OwnedQuantity += 1;
}


//coins

void PowerUp :: setCoins(int c) {
    coins = c;
}


int PowerUp :: getCoins() {
    return coins;
}


void PowerUp :: addCoins(int c) {
    coins += c;
}
