#include "Menu.hpp"
#include "GameMode.hpp"

int main() {
    
    // Setup di ncurses
    initscr();
    noecho();
    cbreak();
    curs_set(0); 
    nodelay(stdscr, true);
    keypad(stdscr, true);

    // Creazione menù
    Menu menu;
    start_color();
    bkgd(COLOR_BLACK);
    menu.createMenuWin();

    // Lancio gioco
    WINDOW * gameWin = newwin(24, 148, 0, 35); 
    GameMode gamemode(menu.getChoice());
    gamemode.launch(gameWin);

    endwin();
    return 0;
}