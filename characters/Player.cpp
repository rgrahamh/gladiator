#include "Player.h"

Player::Player(string n, Race race, Style style) : Character(n, race, style)
{
    inventory = (slot *)malloc(sizeof(slot) * 256);
    memset(inventory, 0, sizeof(slot) * 256);
    memset(&equipped, 0, sizeof(equippedItems));
}
Player::~Player()
{
    free(inventory);
}
Weapon *Player::getOnHand()
{
    return equipped.onHand;
}
Weapon *Player::getOffHand()
{
    return equipped.offHand;
}
Armor *Player::getHelmet()
{
    return equipped.helmet;
}
Armor *Player::getChest()
{
    return equipped.chest;
}
Armor *Player::getPants()
{
    return equipped.pants;
}
Armor *Player::getGloves()
{
    return equipped.gloves;
}
Armor *Player::getNecklace()
{
    return equipped.necklace;
}
Armor **Player::getRings()
{
    return equipped.rings;
};
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
int Player::getItemIndex(string itemName)
{
    for (int i = 0; i < 256; i++)
    {
        if (inventory[i].item != NULL && itemName.compare(inventory[i].item->getName()) == 0)
        {
            return i;
        }
    }
    return -1;
}
int Player::equipItem(string itemName, int slot = 0)
{
    Item *newItem = getItem(itemName);
    cout << newItem << endl;
    if ((newItem->getType()).compare("weapon") == 0)
    {
        cout << "Equipping weapon..." << endl;
        equipWeapon((Weapon *)newItem, slot);
    }
    else if ((newItem->getType()).compare("armor") == 0)
    {
        equipArmor((Armor *)newItem, slot);
    }
    else
    {
        cout << "Unsuccessful at equipping the item!" << endl;
        return 1;
    }
    cout << "Successful at equipping the item!" << endl;
    return 0;
}
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
int Player::giveItem(Item *item)
{
    for (int i = 0; i < 256; i++)
    {
        if (inventory[i].num == 0)
        {
            inventory[i].item = item;
            inventory[i].num++;
            return 1;
        }
    }
    return 0;
}
int main()
{
    Race r = Human();
    Style s = Warrior();
    Player p = Player("Houck", r, s);
    Weapon *crazySword = new Weapon("Crazy Sword", 25, 3, 75, SWORD);
    cout << "Giving item status: " << p.giveItem(crazySword);

    cout << "Character Name: " << p.getName() << endl
         << "Character Health: " << p.getHealth() << endl
         << "Character Abilities: " << p.getCharacterAbilityString(p.getCharacterAbilities()) << endl;
    p.printInventory();

    p.equipItem("Crazy Sword", 0);
    cout << "Equipped weapon: " << p.getOnHand()->getName() << endl;
}
