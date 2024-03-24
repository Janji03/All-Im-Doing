#include "Bullet.hpp"

// COSTRUTTORI
Bullet::Bullet() {}

Bullet::Bullet(int x, int y, bool right, int d, int range) {
    xB = x;
    startingX = x;
    deletingX = x;
    yB = y;
    direction = right;
    damage = d;
    maxRange = range;
    bulletChar = '-';
}


// Stampa proiettile
void Bullet::printBullet(WINDOW * win) {
    mvwaddch(win, yB, xB, bulletChar);
}

// Cancella proiettile
void Bullet::deleteBullet(WINDOW * win) {
    mvwaddch(win, yB, deletingX, ' ');
}


// GETTER
int Bullet::getXB() {
    return xB;
}

int Bullet::getYB() {
    return yB;
}

int Bullet::getStartingX() {
    return startingX;
}

int Bullet::getMaxRange() {
    return maxRange;
}

bool Bullet::getDirection() {
    return direction;
}

int Bullet::getDamage() {
    return damage;
}


// SETTER
void Bullet::setXB(int x) {
    xB = x;
}

void Bullet::setBulletChar(char c){
    bulletChar = c;
}

void Bullet::setDeletingX(int x) {
    deletingX = x;
}



    
