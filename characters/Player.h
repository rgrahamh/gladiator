#ifndef PLAYER_H
#define PLAYER_H
#include "Character.h"
#include <string.h>

using namespace std;

class Player : public Character
{
  public:
    Player(string n, Race race, Style style);
    ~Player();
};
#endif