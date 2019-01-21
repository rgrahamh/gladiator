#ifndef HUMAN_H
#define HUMAN_H

#include <string>

#include "Race.h"

using namespace std;

/**
 * @class Human <Human.h>
 * @brief A class to describe a particular race for a player or enemy
 */
class Human : public Race {
  public:
    Human();
};

#endif