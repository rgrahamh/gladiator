#include "Enemy.h"

/**
 * @brief Parameterized constructor for the Enemy class that (will eventually) generate a character with gear based off of dificulty
 * @param n The enemy's name
 * @param r The enemy's race
 * @param s The enemy's style
 * @param inv The enemy's inventory
 * @param equipArr The array of items for the enemy to equip
 * @return A pointer to a new Enemy object
 */
Enemy::Enemy(string n, Race r, Style s, slot *inv, string *equipArr) : Character(name, race, style)
{
    inventory = inv;
    equipMultipleItems(equipArr);
}

/**
 * @brief Parameterized constructor for the Enemy class that (will eventually) generate a character with gear based off of dificulty
 * @param n The enemy's name
 * @param r The enemy's race
 * @param s The enemy's style
 * @param d The enemy's difficulty level
 * @return A pointer to a new Enemy object
 */
Enemy::Enemy(string name, Race race, Style style, int difficulty) : Character(name, race, style)
{
    Weapon *onHand = constructWeapon("Bronze Daggger");
    Weapon *offHand = constructWeapon("Bronze Dagger");
    Armor *helmet = constructArmor("Leather Helmet");
    Armor *gloves = constructArmor("Leather Gloves");
    Armor *boots = constructArmor("Leather Boots");
    Armor *chest = constructArmor("Leather Vest");
    Armor *pants = NULL;
    Armor *necklace = constructArmor("Collar");
    Armor *ring1 = NULL;
    Armor *ring2 = NULL;
    Armor *ring3 = NULL;
    Armor *ring4 = NULL;
    Item *newItems[12] = {onHand,
                          offHand,
                          helmet,
                          gloves,
                          boots,
                          chest,
                          pants,
                          necklace,
                          ring1,
                          ring2,
                          ring3,
                          ring4};
    this->giveMultipleItems(newItems);
}

/**
<<<<<<< HEAD
 * @brief Destructor for the Enemy class
=======
 * @brief The default deconstructor for the Enemy class 
>>>>>>> master
 */
Enemy::~Enemy()
{
}