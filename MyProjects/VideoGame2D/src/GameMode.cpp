#include "GameMode.hpp"

// COSTRUTTORE
GameMode::GameMode(int option) {
    this->option = option;
}

// Lancia lo shop pre-partita
void GameMode::launch(WINDOW * gameWin) {
    
    Shop shop;
    WINDOW * ShopWin = newwin(24, 186, 0, 0);
    bool restart = true;
    PowerUp powerup;
    while(restart) {   
        Game game(24, 148); 
        // Nuova partita
        if(option == 0) {
            shop.createShopWin(ShopWin);
            restart = shop.runShop(ShopWin, gameWin, true, game, powerup); 
        }
        // Continua partita
        else {
            game.createGameWin(gameWin);
            restart = game.run(gameWin, false, powerup); 
            option = 0;
            if(restart)
                restart = shop.DeathWindow(); 
        }
        werase(gameWin);
        wrefresh(gameWin);
    }
}
             