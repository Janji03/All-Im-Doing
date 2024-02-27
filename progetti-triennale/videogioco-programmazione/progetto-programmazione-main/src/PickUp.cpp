#include "PickUp.hpp"

// COSTRUTTORI
PickUp::PickUp() {}

PickUp::PickUp(int xPU, int yPU, char cPU) {
    x = xPU;
    y = yPU;
    c = cPU;
}


// Stampa il pickup
void PickUp::drawPickUp(WINDOW * win) {
    mvwaddch(win, y, x, c);
}


// GETTER
int PickUp::getX() {
    return x;
}

int PickUp::getY() {
    return y;
}

char PickUp::getC() {
    return c;
}


// SETTER
void PickUp::setX(int xPU) {
    x = xPU;
}

void PickUp::setY(int yPU) {
    y = yPU;
}

void PickUp::setC(char cPU) {
    c = cPU;
}