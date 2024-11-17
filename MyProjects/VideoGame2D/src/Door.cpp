#include "Door.hpp"

// COSTRUTTORI
Door::Door() {}

Door::Door(int x, int y, int h, bool right, char c) : Platform(x, y, h, c) {
    spawnRight = right;
}


// Stampa porta
void Door::printDoor(WINDOW * win) {
    for(int i = 0; i < length; i++) {
        mvwaddch(win, y - i, x, c);
    }
}


// GETTER
bool Door::getR() {
    return spawnRight;
}


// SETTER
void Door::setR(bool b) {
    spawnRight = b;
}