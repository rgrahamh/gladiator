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
    Armor *getHelmet();
    Armor *getChest();
    Armor *getPants();
    Armor *getGloves();
    Armor *getNecklace();
    Armor **getRings();
    Item *getItem(string itemName);
    void equipArmor(string itemName, int slot);
    void equipWeapon(string itemName, int hand);
    string printInventory();
    int giveItem(Item item);

  private:
    struct invSlot
    {
        int num;
        Item item;
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
};
#endif