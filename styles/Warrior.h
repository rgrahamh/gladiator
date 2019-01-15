#ifndef WARRIOR_H
#define WARRIOR_H

#include "Style.h"

#include <string>

using namespace std;

/**
 * @class Warrior <Warrior.h>
 * @brief A class to describe a particular fighting style for a player or enemy
 */ 
class Warrior : public Style
{
  public:
    Warrior();
};

#endif