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
    Weapon *getOnHand();
    Weapon *getOffHand();
    Armor *getHelmet();
    Armor *getChest();
    Armor *getPants();
    Armor *getGloves();
    Armor *getNecklace();
    Armor **getRings();
    Item *getItem(string itemName);
    int getItemIndex(string itemName);
    int equipItem(string itemName, int slot);
    void printInventory();
    int giveItem(Item *item);

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

    void equipArmor(Armor *armor, int slot);
    void equipWeapon(Weapon *weapon, int hand);
};
#endif