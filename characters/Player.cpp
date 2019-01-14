#include "Player.h"

/**
 * @brief Parameterized constructor for the Player character
 * @param n The name of the player
 * @param race The race of the player
 * @param style The style of the player
 * @return A pointer to the Player object
 */
Player::Player(string n, Race race, Style style) : Character(n, race, style)
{
    inventory = (slot *)malloc(sizeof(slot) * 256);
    memset(inventory, 0, sizeof(slot) * 256);
    memset(&equipped, 0, sizeof(equippedItems));
}

/**
 * @brief Destructor for Player class
 */
Player::~Player()
{
    free(inventory);
}

/**
 * @brief Returns a pointer to the on-hand weapon
 * @return A pointer to the on-hand weapon
 */
Weapon *Player::getOnHand()
{
    return equipped.onHand;
}

/**
 * @brief Returns a pointer to the player's off-hand weapon
 * @return A pointer to the off-hand weapon
 */
Weapon *Player::getOffHand()
{
    return equipped.offHand;
}

/**
 * @brief Returns a pointer to the player's off-hand weapon
 * @return A pointer to the off-hand weapon
 */
Armor *Player::getHelmet()
{
    return equipped.helmet;
}

/**
 * @brief Returns a pointer to the player's chest armor
 * @return A pointer to the player's chest armor
 */
Armor *Player::getChest()
{
    return equipped.chest;
}

/**
 * @brief Returns a pointer to the player's pants
 * @return A pointer to the player's pants
 */
Armor *Player::getPants()
{
    return equipped.pants;
}

/**
 * @brief Returns a pointer to the player's gloves
 * @return A pointer to the player's gloves
 */
Armor *Player::getGloves()
{
    return equipped.gloves;
}

/**
 * @brief Returns a pointer to the player's necklace
 * @return A pointer to the player's necklace
 */
Armor *Player::getNecklace()
{
    return equipped.necklace;
}

/**
 * @brief Returns a pointer to an array of the player's rings
 * @return A pointer to an array of the player's rings
 */
Armor **Player::getRings()
{
    return equipped.rings;
};

/**
 * @breif Returns a pointer to an item in inventory if an item of specified name exists in inventory, return NULL otherwise
 * @param itemName The name of the item being searched for
 * @return A pointer to the specified item if found, otherwise NULL
 */
Item *Player::getItem(string itemName)
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
 * @breif Equips an item of the specified name (if found in inventory) to the applicable slot/hand
 * @param itemName The name of the item being equipped
 * @param slot The slot that the item is being equipped to (use for rings and on-hand (0) or off-hand (1) weapons)
 * @return 0 if successful, -1 if the item could not be equipped.
 */
int Player::equipItem(string itemName, int slot = 0)
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
 * @breif Equips the specified weapon to the user
 * @param armor A pointer to the armor being equipped
 * @param slot The slot that the armor is being equpped to (default 0)
 */
void Player::equipArmor(Armor *armor, int slot = 0)
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
 * @breif Equips the specified weapon to the user
 * @param armor A pointer to the weapon being equipped
 * @param slot The slot that the weapon is being equpped to (default 0)
 */
void Player::equipWeapon(Weapon *weapon, int hand = 0)
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
 * @breif Prints the player's inventory
 */
void Player::printInventory()
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
 * @breif Gives the player an item
 * @param item The item being given to the player
 * @return 0 if successful, -1 if inventory is full
 */
int Player::giveItem(Item *item)
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