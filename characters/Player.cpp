#include "Player.h"

Player::Player(Race race, Style style): Character(race, style)
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
Item* Player::getItem(string itemName)
{
    for (int i = 0; i < 256; i++)
    {
        if (itemName.compare(inventory[i].item.getName()))
        {
            return &inventory[i].item;
        }
    }
    return NULL;
}
// void equipItem(string itemName)
// {
// }
// string getItemNames()
// {
// };