#include "Player.h"
#include "../races/Human.h"
#include "../styles/Warrior.h"

Player::Player(string n, Race race, Style style) : Character(n, race, style)
{
    inventory = (slot *)malloc(sizeof(slot) * 256);
    memset(inventory, 0, sizeof(slot) * 256);
    memset(&equipped, 0, sizeof(equippedItems));
}
Player::~Player()
{
    free(inventory);
    free(&equipped);
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
        if (itemName.compare(inventory[i].item.getName()))
        {
            return &(inventory[i].item);
        }
    }
    return NULL;
}
void Player::equipArmor(string itemName, int slot = 0)
{
    Armor *newArmor = (Armor *)(getItem(itemName));

    if (newArmor == NULL)
    {
        return;
    }

    switch ((*newArmor).getType())
    {
    case (HELMET):
        this->equipped.helmet = newArmor;
        break;
    case (GLOVES):
        this->equipped.gloves = newArmor;
        break;
    case (BOOTS):
        this->equipped.boots = newArmor;
        break;
    case (CHEST):
        this->equipped.boots = newArmor;
        break;
    case (PANTS):
        this->equipped.boots = newArmor;
        break;
    case (NECKLACE):
        this->equipped.necklace = newArmor;
        break;
    case (RING):
        this->equipped.rings[slot] = newArmor;
    }
}
void Player::equipWeapon(string itemName, int hand = 0)
{
    Weapon *newWeapon = (Weapon *)(getItem(itemName));

    if (newWeapon == NULL)
    {
        return;
    }

    if (hand == 0)
    {
        equipped.onHand = newWeapon;
    }
    else
    {
        equipped.offHand = newWeapon;
    }
}
string Player::printInventory()
{
    cout << "Items in inventory:" << endl;
    for (int i = 0; i < 256; i++)
    {
        if (inventory[i].num != 0)
        {
            cout << inventory[i].num << "x\t" << inventory[i].item.getName() << endl;
        }
    }
};
int Player::giveItem(Item item)
{
    for (int i = 0; i < 256; i++)
    {
        if (inventory[i].num == 0)
        {
            inventory[i].item = item;
            inventory[i].num++;
        }
    }
    return 1;
}
int main()
{
    Race r = Human();
    Style s = Warrior();
    Player p = Player("Houck", r, s);

    cout << "Character Name: " << p.getName() << endl
         << "Character Health: " << p.getHealth() << endl
         << "Character Abilities: " << p.getCharacterAbilityString(p.getCharacterAbilities()) << endl
         << "Character inventory:" << endl
         << p.printInventory();
}
