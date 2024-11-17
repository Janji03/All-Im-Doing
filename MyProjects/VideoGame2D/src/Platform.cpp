#include "Platform.hpp"

// COSTRUTTORI
Platform::Platform() {
    x = 0;
}

Platform::Platform(int xPlat, int yPlat, int lPlat, char cPlat) {
    x = xPlat;
    y = yPlat;
    length = lPlat;
    c = cPlat;
}


// Stampa piattaforma
void Platform::printPlatform(WINDOW * win) {
    for(int i = 0; i < length; i++) {
        mvwaddch(win, y, x + i, c);
    }
}


// GETTER
int Platform::getX() {
    return x;
}

int Platform::getY() {
    return y;
}

int Platform::getL() {
    return length;
}

char Platform::getC() {
    return c;
}


// SETTER
void Platform::setX(int xPlat) {
    x = xPlat;
}

void Platform::setY(int yPlat) {
    y = yPlat;
}

void Platform::setL(int lPlat) {
    length = lPlat;
}

void Platform::setC(char cPlat) {
    c = cPlat;
}