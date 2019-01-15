#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <cstring>

//Including all races
#include "../races/Human.h"

//Including all styles
#include "../styles/Warrior.h"

#include "../items/Armor.h"
#include "../items/Potion.h"
#include "../items/Weapon.h"

/**
 * @class Character <Character.h>
 * @brief A class to describe a player or enemy
 */ 
class Character
{
public:
  Character(string n, Race race, Style style);
  ~Character();
  void determineStats();
  string getName();
  double getAttack();
  double getDefense();
  double getConstitution();
  double getResilience();
  double getEnergy();
  double getHealth();
  double getSpeed();
  double getSkill();
  double getLuck();
  Weapon *getOnHand();
  Weapon *getOffHand();
  Armor *getHelmet();
  Armor *getChest();
  Armor *getPants();
  Armor *getGloves();
  Armor *getNecklace();
  Armor **getRings();
  Item *getItem(string itemName);
  int equipItem(string itemName, int slot);
  void printInventory();
  int giveItem(Item *item);
  string getCharacterAbilityString(bool *ab);
  bool *getCharacterAbilities();

private:
  struct invSlot
  {
    int num;
    Item *item;
  } typedef slot;
  struct equippedItems
  {
    Weapon *onHand;
    Weapon *offHand;
    Armor *helmet;
    Armor *gloves;
    Armor *boots;
    Armor *chest;
    Armor *pants;
    Armor *necklace;
    Armor **rings;
  } typedef equipment;

  slot *inventory;
  equipment equipped;
  string name;
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

  void equipArmor(Armor *armor, int slot);
  void equipWeapon(Weapon *weapon, int hand);
};

#endif