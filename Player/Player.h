//
// Created by Victor Navarro on 13/02/24.
//

#ifndef RPG_PLAYER_H
#define RPG_PLAYER_H

#include "../Character/Character.h"
#include "../Enemy/Enemy.h"
#include "../Combat/Action.h"

struct Action;
class Enemy;

class Player: public Character {
protected:
    int experience;
    int level;
    vector<Enemy*> enemies;
public:
    Player(const char* _name, int _health, int _attack, int _defense, int _speed, int _experience);
    Player(const char* _name, int _health, int _attack, int _defense, int _speed);
    //Player(const char*, int, int, int, int, int);
    void doAttack(Character *target) override;
    void takeDamage(int damage) override;
    void distributeStatPointsToEnemies(vector<Enemy*>& enemies);


    Character* getTarget(vector<Enemy*> enemies);

    void flee(vector<Enemy*> enemies);
    void emote();
    void levelUp();
    void gainExperience(int);


    Action takeAction(vector<Enemy*> enemies);

};


#endif //RPG_PLAYER_H
