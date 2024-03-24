#include "Character.hpp"

// COSTRUTTORI
Character::Character() {}

Character::Character(int xEnemy, int yEnemy, char cEnemy, int hpEnemy, int dEnemy, int rEnemy, int scEnemy) {
    x = xEnemy;
    y = yEnemy;
    c = cEnemy;
    health = hpEnemy;
    damage = dEnemy;
    range = rEnemy;
    shootingCooldown = scEnemy;
    shootingCounter = 0;
    isAlive = true;
}

Character::Character(int width, int height, char ch) {
    xMax = width;
    yMax = height;
    c = ch;
    isAlive = true;
    shootingCounter = 0;
}


// Sparo del personaggio verso destra o sinistra
void Character::shoot(pBullet &head, bool right) {
    if(right) {
        Bullet bullet(x+1, y, right, damage, range);
        head = addBullet(head, bullet);
        shootingCounter = 0;
    }
    else {
        Bullet bullet(x-1, y, right, damage, range);
        head = addBullet(head, bullet);
        shootingCounter = 0;
    }
}

// Aggiunge un proiettile in coda ad una lista di proiettili
pBullet Character::addBullet(pBullet headList, Bullet bullet) {
    pBullet newBullet = new bulletList;
    newBullet->b = bullet;
    newBullet->nextBullet = NULL;

    if(headList == NULL) {
        return newBullet;
    }
    else {
        pBullet temp = headList;
        while(temp->nextBullet != NULL) {
            temp = temp->nextBullet;
        }
        temp->nextBullet = newBullet;
        return headList;
    }
}


// Cancella il carattere dallo schermo
void Character::deleteCharacter(WINDOW * win) {
    mvwaddch(win, y, x, ' ');
}


// GETTER
int Character::getX() {
    return x;
}

int Character::getY() {
    return y;
}

char Character::getC() {
    return c;
}

bool Character::getIsAlive() {
    return isAlive;
}

int Character::getHealth() {
    return health;
}

int Character::getDamage() {
    return damage;
}

int Character::getRange() {
    return range;
}

int Character::getShootingCooldown() {
    return shootingCooldown;
}

int Character::getShootingCounter() {
    return shootingCounter;
}


// SETTER
void Character::setX(int xChar) {
    x = xChar;
}

void Character::setY(int yChar) {
    y = yChar;
}

void Character::setC(char cChar) {
    c = cChar;
}

void Character::initializeHealth() {
    health = 0;
}

void Character::setHealth(int hp) {
    health += hp;
    if(health <= 0) {
        isAlive = false;
        health = 0;
    }
        
}

void Character::setDamage(int d) {
    damage = d;
}

void Character::setRange(int r) {
    range = r;
}

void Character::setIsAlive(bool alive) {
    isAlive = alive;
}

void Character::setShootingCooldown(int scl) {
    shootingCooldown = scl;
}

void Character::setShootingCounter(int sct) {
    shootingCounter = sct;
}