#ifndef ENEMY_H
#define ENEMY_H
#include "Character.h"

enum difficulty
{
    BABY,
    EASY,
    MEDIUM,
    HARD,
    INSANE
};

class Enemy : public Character
{
  public:
    Enemy(string name, Race race, Style style, slot *inv, string *equipArr);
    Enemy(string name, Race race, Style style, int difficulty);
    ~Enemy();
};
#endif