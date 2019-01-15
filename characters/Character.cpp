#include "Character.h"

#include <iostream>

using namespace std;

/**
 * @brief The parameterized constructor for the Character class
 * @param n The name of the character
 * @param r The race of the character
 * @param s The style of the character
 */
Character::Character(string n, Race r, Style s)
{
    this->race = r;
    this->style = s;
    this->name = n;

    inventory = (slot *)malloc(sizeof(slot) * 256);
    memset(inventory, 0, sizeof(slot) * 256);
    memset(&equipped, 0, sizeof(equippedItems));

    this->determineStats();
}

/**
 * @brief The destructor for the Character class
 */
Character::~Character()
{
    free(inventory);
}

/**
 * @brief Determines the stats of a character
 */
void Character::determineStats()
{
    this->attack = this->race.getAttack() + this->style.getAttack();
    this->defense = this->race.getDefense() + this->style.getDefense();
    this->constitution = this->race.getConstitution() + this->style.getConstitution();
    this->resilience = this->race.getResilience() + this->style.getResilience();
    this->energy = this->race.getEnergy() + this->style.getEnergy();
    this->health = this->race.getHealth() + this->style.getHealth();
    this->speed = this->race.getSpeed() + this->style.getSpeed();
    this->skill = this->race.getSkill() + this->style.getSkill();
    this->luck = this->race.getLuck() + this->style.getLuck();

    bool characterAbils[6] = {false, false, false, false, false, false};
    for (int i = 0; i < 6; i++)
    {
        characterAbils[i] = this->race.getRaceAbilities()[i] && this->style.getStyleAbilities()[i];
    }

    copy(characterAbils, characterAbils + sizeof(characterAbils), this->abilities);
}

/**
 * @brief Returns the name of the character
 * @return The name of the character
 */
string Character::getName()
{
    return this->name;
}

/**
 * @brief Returns the attack of the character
 * @return The attack of the character
 */
double Character::getAttack()
{
    return this->attack;
}

/**
 * @brief Returns the defense of the character
 * @return The defense of the character
 */
double Character::getDefense()
{
    return this->defense;
}

/**
 * @brief Returns the constitution of the character
 * @return The constitution of the character
 */
double Character::getConstitution()
{
    return this->constitution;
}

/**
 * @brief Returns the resilience of the character
 * @return The resilience of the character
 */
double Character::getResilience()
{
    return this->resilience;
}

/**
 * @brief Returns the energy of the character
 * @return the energy of the character
 */
double Character::getEnergy()
{
    return this->energy;
}

/**
 * @brief Returns the health of the character
 * @return The health of the character
 */
double Character::getHealth()
{
    return this->health;
}

/**
 * @brief Returns the speed of the character
 * @return The speed of the character
 */
double Character::getSpeed()
{
    return this->speed;
}

/**
 * @brief Returns the skill of the character
 * @return The skill of the character
 */
double Character::getSkill()
{
    return this->skill;
}

/**
 * @brief Returns the luck of the character
 * @return The luck of the character
 */
double Character::getLuck()
{
    return this->luck;
}

/**
 * @brief Returns a string representation of the abilities that the character possesses
 * @param ab The bool array of the character's abilities
 * @return The string representation of all of the character's abilities
 */
string Character::getCharacterAbilityString(bool *ab)
{
    string result = "";
    (ab[0]) ? result = result + " LANCE" : result = result + "";
    (ab[1]) ? result = result + " SWORD" : result = result + "";
    (ab[2]) ? result = result + " AXE" : result = result + "";
    (ab[3]) ? result = result + " LIGHT" : result = result + "";
    (ab[4]) ? result = result + " DARK" : result = result + "";
    (ab[5]) ? result = result + " ANIMA" : result = result + "";
    return result;
}

/**
 * @brief Returns a pointer to the on-hand weapon
 * @return A pointer to the on-hand weapon
 */
Weapon *Character::getOnHand()
{
    return equipped.onHand;
}

/**
 * @brief Returns a pointer to the character's off-hand weapon
 * @return A pointer to the off-hand weapon
 */
Weapon *Character::getOffHand()
{
    return equipped.offHand;
}

/**
 * @brief Returns a pointer to the character's off-hand weapon
 * @return A pointer to the off-hand weapon
 */
Armor *Character::getHelmet()
{
    return equipped.helmet;
}

/**
 * @brief Returns a pointer to the character's chest armor
 * @return A pointer to the character's chest armor
 */
Armor *Character::getChest()
{
    return equipped.chest;
}

/**
 * @brief Returns a pointer to the character's pants
 * @return A pointer to the character's pants
 */
Armor *Character::getPants()
{
    return equipped.pants;
}

/**
 * @brief Returns a pointer to the character's gloves
 * @return A pointer to the character's gloves
 */
Armor *Character::getGloves()
{
    return equipped.gloves;
}

/**
 * @brief Returns a pointer to the character's necklace
 * @return A pointer to the character's necklace
 */
Armor *Character::getNecklace()
{
    return equipped.necklace;
}

/**
 * @brief Returns a pointer to an array of the character's rings
 * @return A pointer to an array of the character's rings
 */
Armor **Character::getRings()
{
    return equipped.rings;
};

/**
 * @brief Returns a pointer to an item in inventory if an item of specified name exists in inventory, return NULL otherwise
 * @param itemName The name of the item being searched for
 * @return A pointer to the specified item if found, otherwise NULL
 */
Item *Character::getItem(string itemName)
{
    for (int i = 0; i < 256; i++)
    {
        if (inventory[i].item != NULL && itemName.compare(inventory[i].item->getName()) == 0)
        {
            return inventory[i].item;
        }
    }
    //cout << "Item " << itemName << " not found" << endl;
    return NULL;
}

/**
 * @brief Equips an item of the specified name (if found in inventory) to the applicable slot/hand
 * @param itemName The name of the item being equipped
 * @param slot The slot that the item is being equipped to (use for rings and on-hand (0) or off-hand (1) weapons)
 * @return 0 if successful, -1 if the item could not be equipped.
 */
int Character::equipItem(string itemName, int slot = 0)
{
    Item *newItem = getItem(itemName);
    if (newItem != NULL && (newItem->getType()) == WEAPON)
    {
        equipWeapon((Weapon *)newItem, slot);
    }
    else if (newItem != NULL && (newItem->getType()) == ARMOR)
    {
        equipArmor((Armor *)newItem, slot);
    }
    else
    {
        return -1;
    }
    return 0;
}

/**
 * @brief Equips the specified weapon to the user
 * @param armor A pointer to the armor being equipped
 * @param slot The slot that the armor is being equpped to (default 0)
 */
void Character::equipArmor(Armor *armor, int slot = 0)
{
    if (armor == NULL)
    {
        return;
    }

    switch ((*armor).getArmorType())
    {
    case (HELMET):
        this->equipped.helmet = armor;
        break;
    case (GLOVES):
        this->equipped.gloves = armor;
        break;
    case (BOOTS):
        this->equipped.boots = armor;
        break;
    case (CHEST):
        this->equipped.boots = armor;
        break;
    case (PANTS):
        this->equipped.boots = armor;
        break;
    case (NECKLACE):
        this->equipped.necklace = armor;
        break;
    case (RING):
        this->equipped.rings[slot] = armor;
    }
}

/**
 * @brief Equips the specified weapon to the user
 * @param armor A pointer to the weapon being equipped
 * @param slot The slot that the weapon is being equpped to (default 0)
 */
void Character::equipWeapon(Weapon *weapon, int hand = 0)
{
    if (weapon == NULL)
    {
        return;
    }

    if (hand == 0)
    {
        equipped.onHand = weapon;
    }
    else
    {
        equipped.offHand = weapon;
    }
}

/**
 * @brief Equips an array of items of the specified names (if found in inventory) to the applicable slot/hand
 * @param equipArr An array of item names to equip
 * @return The number of successful item equips
 */
int Character::equipMultipleItems(string *equipArr)
{
    int equippedItems = 0;
    if (equipArr != NULL)
    {
        int equipSize = sizeof(equipArr) / sizeof(equipArr[0]); //equipSize calculates how many items are being equipped
        int weaponVal = 0;                                      //weaponVal keeps track of the weapon handedness
        int ringVal = 0;                                        //ringVal keeps track of the ring slots
        for (int i = 0; i < equipSize; i++)
        {
            Item *item = getItem(equipArr[i]);
            if (item != NULL)
            {
                if (item->getType() == WEAPON)
                {
                    equipItem(equipArr[i], weaponVal);
                    weaponVal++;
                }
                else if (item->getType() == ARMOR && ((Armor *)item)->getArmorType() == RING)
                {
                    equipItem(equipArr[i], ringVal);
                    ringVal++;
                }
                else
                {
                    equipItem(equipArr[i], 0);
                }
                equippedItems++;
            }
        }
    }
    return equippedItems;
}

/**
 * @brief Prints the character's inventory
 */
void Character::printInventory()
{
    for (int i = 0; i < 256; i++)
    {
        if (inventory[i].num != 0)
        {
            cout << inventory[i].num << "x " << inventory[i].item->getName() << endl;
        }
    }
};

/**
 * @brief Gives the character an item
 * @param item The item being given to the character
 * @return 0 if successful, -1 if inventory is full
 */
int Character::giveItem(Item *item)
{
    for (int i = 0; i < 256; i++)
    {
        if (inventory[i].num == 0)
        {
            inventory[i].item = item;
            inventory[i].num++;
            return 0;
        }
    }
    return -1;
}

/**
 * @brief Gives the character multiple items
 * @param items The array of items being given to the character
 * @return The number of items successfully given to the character
 */
int Character::giveMultipleItems(Item **items)
{
    if (items == NULL)
    {
        return 0;
    }
    int numItems = sizeof(items) / sizeof(items[0]);
    int numItemsGiven = 0;
    for (int i = 0; numItemsGiven < numItems; i++)
    {
        if (items[i] != NULL)
        {
            this->giveItem(items[i]);
            numItemsGiven++;
        }
    }
    return numItemsGiven;
}

/**
 * @brief The getter function for abilities
 * @return A bool array value of the character's abilities 
 */
bool *Character::getCharacterAbilities()
{
    return this->abilities;
}

//int main()
//{
//    Race r = Human();
//    Style s = Warrior();
//    Character c = Character("Fletch", r, s);
//     cout << "Character Health: " << c.getHealth() << endl
//          << "Character Abilities: " << c.getAbilityStr(c.getAbilities()) << endl;
// }