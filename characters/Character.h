#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "../races/Race.h"
#include "../races/Human.h"
#include "../styles/Style.h"
#include "../styles/Warrior.h"
#include "../items/Armor.h"
#include "../items/Weapon.h"

class Character
{
public:
  Character(Race race, Style style);
  ~Character();
  void determineStats();
  double getAttack();
  double getDefense();
  double getConstitution();
  double getResilience();
  double getEnergy();
  double getHealth();
  double getSpeed();
  double getSkill();
  double getLuck();
  string getCharacterAbilityString(bool *ab);
  bool *getCharacterAbilities()
  {
    return this->abilities;
  }

private:
  Race race;
  Style style;
  double attack;
  double defense;
  double constitution;
  double resilience;
  double energy;
  double health;
  double speed;
  double skill;
  double luck;
  bool abilities[6];
};

#endif