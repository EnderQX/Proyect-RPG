//
// Created by Victor Navarro on 13/02/24.
//
#include "Character.h"
#include <cstring>

Character::Character(const char* _name, int _health, int _attack, int _defense, int _speed, bool _isPlayer) {
    strncpy(name, _name, sizeof(name) -1);
    name[sizeof(name) -1] = '\0';
    experience = 0;
    level = 1;
    health = _health;
    attack = _attack;
    defense = _defense;
    speed = _speed;
    isPlayer = _isPlayer;
    fleed = false;
}

void Character::gainExperience(int exp) {
    experience += exp;
    while (experience >= 100){
        levelUp();
        experience -=100;
    }
}

void Character::levelUp() {
    level++;
}

int Character::getExperience() {
    return experience;
}

int Character::getLevel() {
    return level;
}

void Character::setName(const char* _name) {
    strncpy(name, _name, sizeof(name) -1);
    name[sizeof(name) -1] = '\0';
}

const char* Character::getName() {
    return name;
}

void Character::setHealth(int _health) {
    health = _health;
}

int Character::getHealth() {
    return health;
}

void Character::setAttack(int _attack) {
    attack = _attack;
}

int Character::getAttack() {
    return attack;
}

void Character::setDefense(int _defense) {
    defense = _defense;
}

int Character::getDefense() {
    return defense;
}

void Character::setSpeed(int _speed) {
    speed = _speed;
}

int Character::getSpeed() {
    return speed;
}

string Character::toString() {
    return "Name: " + string(name) + "\nHealth: " + to_string(health) + "\nAttack: " + to_string(attack) + "\nDefense: " + to_string(defense) + "\nSpeed: " + to_string(speed);
}

bool Character::getIsPlayer() {
    return isPlayer;
}

bool Character::hasFleed() {
    return fleed;
}