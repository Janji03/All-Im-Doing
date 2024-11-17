#include "InfoGame.hpp"

// COSTRUTTORE
InfoGame::InfoGame() {
    infoWin = newwin(24, 30, 0, 2);
    box(infoWin, 0, 0);
    refresh();
}

void InfoGame::showInfo(Player player, int generatedLevels, int currentLevel, PowerUp powerup) {
    box(infoWin, 0, 0);

    mvwprintw(infoWin, 2, 4, "STATS ");
    mvwprintw(infoWin, 4, 4, "Points: %d ", player.getPoints());
    mvwprintw(infoWin, 5, 4, "Health: %d ", player.getHealth());
    mvwprintw(infoWin, 6, 4, "Damage: %d ", player.getDamage());
    mvwprintw(infoWin, 7, 4, "Range: %d ", player.getRange());
    mvwprintw(infoWin, 8, 4, "Shooting Cooldown: %d ", player.getShootingCooldown());
    mvwprintw(infoWin, 9, 4, "Coins: %d ", powerup.getCoins());
    mvwprintw(infoWin, 10, 4, "Enemies Killed: %d ", player.getEnemiesKilled());
    mvwprintw(infoWin, 11, 4, "Generated Levels: %d ", generatedLevels);
    mvwprintw(infoWin, 12, 4, "Current Level: %d ", currentLevel);

    mvwprintw(infoWin, 14, 4, "POWER UPS");
    int cont = 0, cont1 = 0;
    for(int i = 0; i < MAX_BONUS; i++) {
        if(powerup.bonus[i].IsActive) {
            mvwprintw(infoWin, 15 + cont, 4, "                         ");
            mvwprintw(infoWin, 15 + cont, 4, "%s", powerup.bonus[i].name);

            if(powerup.bonus[2].IsActive && i == 2){
                mvwprintw(infoWin, 15 + cont, 11, "                ");
                mvwprintw(infoWin, 15 + cont, 11, "%d Hit left", 5-(player.getCharacterHits() - powerup.previousCharacterHits));
            }
                

            if(powerup.bonus[3].IsActive && i == 3){
                mvwprintw(infoWin, 15 + cont, 13, "             ");
                mvwprintw(infoWin, 15 + cont, 13, "%d Kills left", 4-(player.getEnemiesKilled() - powerup.previousEnemiesKilled));

            }
                
            if(powerup.bonus[5].IsActive && i == 5){
                mvwprintw(infoWin, 15 + cont, 16, "             ");
                mvwprintw(infoWin, 15 + cont, 16, "%d Shots left", 10-(player.getTotalBullets() - powerup.previousBulletsShot));
            }
                
            cont++;
        }
        else {
            mvwprintw(infoWin, 21 - cont1, 4, "                         ");
            cont1++;
        }
    }
    wrefresh(infoWin);
}



void InfoGame :: showLegenda(Player player, PowerUp powerup){
    
    WINDOW * Legenda = newwin(11, 148, 24, 32);
    wrefresh(Legenda);
    mvwprintw(Legenda, 2, 4, "POWERUPS ");
    mvwprintw(Legenda, 3, 4, "Press 1 to activate the SHIELD, you have %d of them.", powerup.bonus[2].OwnedQuantity);
    mvwprintw(Legenda, 4, 4, "Press 2 to activate the MINIGUN, you have %d of them.", powerup.bonus[3].OwnedQuantity);
    mvwprintw(Legenda, 5, 4, "Press 3 to activate the SUPER-JUMP, you have %d of them.", powerup.bonus[4].OwnedQuantity);
    mvwprintw(Legenda, 6, 4, "Press 4 to activate the POWER-SHOTS, you have %d of them.", powerup.bonus[5].OwnedQuantity);
    mvwprintw(Legenda, 7, 4, "The second life option will appear once you die, you have %d of them.", powerup.bonus[6].OwnedQuantity);
    mvwprintw(Legenda, 8, 4, "You have %d increased health it will automatically activate in the next game.", powerup.bonus[0].OwnedQuantity);
    mvwprintw(Legenda, 9, 4, "You have %d increased damage it will automatically activate in the next game.", powerup.bonus[1].OwnedQuantity);


    if(powerup.bonus[2].IsActive){
        mvwprintw(Legenda, 3, 4, "                                                         ");
        wattron(Legenda, COLOR_PAIR(4));
        mvwprintw(Legenda, 3, 4, "SHIELD IS ACTIVE!");
        wattroff(Legenda, COLOR_PAIR(4));
    }
    
    if(powerup.bonus[3].IsActive){
        wattron(Legenda, A_ITALIC);
        mvwprintw(Legenda, 4, 4, "                                                         ");
        mvwprintw(Legenda, 4, 4, "MINIGUN IS ACTIVE!");
        wattroff(Legenda, A_ITALIC);

    } 

    if(powerup.bonus[4].IsActive){
        wattron(Legenda, COLOR_PAIR(5));
        mvwprintw(Legenda, 5, 4, "                                                         ");
        mvwprintw(Legenda, 5, 4, "SUPERJUMP IS ACTIVE!");
        wattroff(Legenda, COLOR_PAIR(5));
    }

    if(powerup.bonus[5].IsActive){
        wattron(Legenda, A_BOLD);
        mvwprintw(Legenda, 6, 4, "                                                         ");
        mvwprintw(Legenda, 6, 4, "POWER-SHOTS ARE ACTIVE!");
        wattroff(Legenda, A_BOLD);
    }

    if(powerup.bonus[0].OwnedQuantity == 0 && !powerup.bonus[0].IsActive){
        mvwprintw(Legenda, 8, 4, "                                                                                              ");
        mvwprintw(Legenda, 8, 4, "You have no more increased health!, it will not activate on the next game.");
    }

    if(powerup.bonus[0].IsActive){
        mvwprintw(Legenda, 8, 4, "                                                                                              ");
        mvwprintw(Legenda, 8, 4, "INCREASED LIFE IS ACTIVE!");
    }

    if(powerup.bonus[1].OwnedQuantity == 0 && !powerup.bonus[1].IsActive){
        mvwprintw(Legenda, 9, 4, "                                                                                              ");
        mvwprintw(Legenda, 9, 4, "You have no more increased damage!, it will not activate on the next game.");
    }

    if(powerup.bonus[1].IsActive){
        mvwprintw(Legenda, 9, 4, "                                                                                              ");
        mvwprintw(Legenda, 9, 4, "INCREASED DAMAGE IS ACTIVE!");
    }

    wrefresh(Legenda);


    if(!player.getIsAlive()){
        werase(Legenda);
        wrefresh(Legenda);
        delwin(Legenda);
    }

}