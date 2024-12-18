#include "Game.hpp"

Game::Game(int xM, int yM) {
    xMax = xM;
    yMax = yM;
}

void Game::createGameWin(WINDOW * win) {
    box(win, 0, 0);
    getmaxyx(win, yMax, xMax);
    refresh();
}


void Game::clearGameWin(WINDOW * win) {
    wclear(win);
    box(win, 0, 0);
}


bool Game::run(WINDOW * gameWin, bool newGame, PowerUp &powerup) { 
    
    InfoGame infogame;
    Map map; 
    Save save;  

    pLevel currentLevel = NULL;                 // Puntatore al livello corrente
    pLevel FIRST = NULL;                        // Puntatore al primo livello della lista 
    pLevel LAST = NULL;                       // Puntatore all'ultimo livello generato
    
    Player player(xMax, yMax, '@');
    
    ifstream fileStream("savefile.txt");

    
    // Caricare dati da file
    if(!newGame && !fileStream.fail()) {
        save.loadGame(player, map, currentLevel, FIRST, LAST, powerup);
        map.printMap(gameWin, currentLevel);
    }
    // Creare una nuova partita
    else {
        map.increaseDifficultyPowerup(powerup);
        map.createNewLevel(currentLevel);
        map.printMap(gameWin, currentLevel);
        player.spawnPlayer(currentLevel->levelDoors[0].getR() ? currentLevel->levelDoors[0].getX() + 1 : currentLevel->levelDoors[0].getX() - 1, currentLevel->levelDoors[0].getY());
        map.setNumOfCurrentLevel(1);
        map.setNumOfGeneratedLevels(1);
        FIRST = currentLevel;
        LAST = currentLevel;
    }

    player.CheckStartPowerUps(powerup);
        
    pBullet myBullets = NULL;                   // Lista di proiettili attivi del player
    pBullet enemyBullets = NULL;                // Lista di proiettili attivi dei nemici

    BulletHelper BH;
    
    bool leaveGame = false;
    

    //ciclo di gioco
    while((player.getIsAlive() || powerup.bonus[6].IsActive) && !leaveGame) {
        // gestione stanza successiva
        if(player.getEnterNextLevel()) {
            if(LAST == currentLevel) {
                map.increaseDifficulty();
                clearGameWin(gameWin);
                map.createNewLevel(LAST);  
                currentLevel = LAST;
                map.printMap(gameWin, currentLevel);             
                player.spawnPlayer(currentLevel->levelDoors[0].getR() ? currentLevel->levelDoors[0].getX() + 1 : currentLevel->levelDoors[0].getX() - 1, currentLevel->levelDoors[0].getY());
                map.resetBulletLists(myBullets, enemyBullets);
                map.setNumOfGeneratedLevels(1);
                map.setNumOfCurrentLevel(1);
                player.setPoints(100);
            }
            else {
                clearGameWin(gameWin);
                currentLevel = currentLevel->nextLevel;
                map.printMap(gameWin, currentLevel);
                player.spawnPlayer(currentLevel->levelDoors[0].getR() ? currentLevel->levelDoors[0].getX() + 1 : currentLevel->levelDoors[0].getX() - 1, currentLevel->levelDoors[0].getY());
                map.resetBulletLists(myBullets, enemyBullets);
                map.setNumOfCurrentLevel(1);
            }
            player.setEnterNextLevel(false);
        }
        
        // gestione stanza precedente
        if(player.getEnterPreviousLevel()) {
            if(currentLevel != FIRST) {
                clearGameWin(gameWin);
                currentLevel = currentLevel->previousLevel;
                map.printMap(gameWin, currentLevel);
                player.spawnPlayer(currentLevel->levelDoors[1].getR() ? currentLevel->levelDoors[1].getX() + 1 : currentLevel->levelDoors[1].getX() - 1, currentLevel->levelDoors[1].getY());
                map.resetBulletLists(myBullets, enemyBullets); 
                map.setNumOfCurrentLevel(-1);
                player.setEnterPreviousLevel(false);
            }
        }       

        infogame.showInfo(player, map.getNumOfGeneratedLevels(), map.getNumOfCurrentLevel(), powerup);

        BH.deleteBullets(myBullets, gameWin);
        BH.deleteBullets(enemyBullets, gameWin);

        player.deleteCharacter(gameWin);
        map.deleteEnemies(gameWin, currentLevel->levelEnemies);

        wrefresh(gameWin);

        player.handleInput(myBullets, leaveGame, powerup);
        player.updatePlayer(currentLevel, gameWin, powerup);
        player.triggerEnemies(gameWin, currentLevel->levelEnemies, enemyBullets);

        player.CheckInGamePowerUps(powerup, myBullets, gameWin); //capisci printmap dopo seconda vita
        map.printEnemies(gameWin, currentLevel->levelEnemies);
        map.printPickUps(gameWin, currentLevel->levelPickUps);
        player.drawCharacterPlayer(gameWin, powerup);
        player.deactivateInGamePowerUps(powerup);
        
        BH.printPlayerBullets(myBullets, gameWin, player, currentLevel, xMax - 1, powerup); 
        BH.printEnemyBullets(enemyBullets, gameWin, player, xMax - 1, powerup);

        infogame.showLegenda(player, powerup);
        
        wrefresh(gameWin);
        napms(30);
    }
    if(leaveGame) {
        save.saveGame(player, map, FIRST, powerup);
    }
    return leaveGame ? false : true;
}

