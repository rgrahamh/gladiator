#ifndef PLAYER_H
#define PLAYER_H
#include "Character.h"
#include <string.h>

using namespace std;

class Player : public Character
{
  public:
    Player(Race race, Style style);
    ~Player();
    Armor *getHelmet();
    Armor *getChest();
    Armor *getPants();
    Armor *getGloves();
    Armor *getNecklace();
    Armor **getRings();
    Item *getItem(string itemName);
    void equipItem(string itemName);
    string getItemNames();

  private:
    struct invSlot
    {
        int num;
        Item item;
    } typedef slot;
    struct equippedItems
    {
        Weapon *weapon;
        Armor *helmet;
        Armor *chest;
        Armor *pants;
        Armor *gloves;
        Armor *necklace;
        Armor **rings;
    } typedef equipment;

    slot *inventory;
    equipment equipped;
};
#endif