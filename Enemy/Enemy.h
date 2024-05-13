//
// Created by Victor Navarro on 13/02/24.
//

#ifndef RPG_ENEMY_H
#define RPG_ENEMY_H
#include "../Character/Character.h"
#include "../Player/Player.h"
#include "../Combat/Action.h"

struct Action;
class Player;

class Enemy: public Character {
public:
    Enemy(const char* _name, int _health, int _attack, int _defense, int _speed, int _experience);
    Enemy(const char* _name, int _health, int _attack, int _defense, int _speed);
    //Enemy(const char*, int, int, int, int, int);
    void doAttack(Character *target) override;
    void takeDamage(int damage) override;
    Character* getTarget(vector<Player*> teamMembers);
    Action takeAction(vector<Player*> player);
};


#endif //RPG_ENEMY_H
