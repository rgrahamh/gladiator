#ifndef PLAYER_H
#define PLAYER_H
#include <string.h>

#include "Character.h"

using namespace std;

/**
 * @class Player <Player.h>
 * @brief A class to describe a particular character who fights enemies
 */
class Player : public Character {
  public:
    Player(string n, Race* r, Style* s);
    ~Player();
};
#endif
