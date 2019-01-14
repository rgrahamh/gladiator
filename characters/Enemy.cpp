#include "Enemy.h"

/**
 * @brief The basic constructor for an enemy-type character
 * @param name The name of the enemy
 * @param race The race of the enemy
 * @param style The fighting-style of the enemy
 * @return A pointer to a new Enemy object
 */
Enemy::Enemy(string name, Race race, Style style) : Character(name, race, style)
{
}

/**
 * @brief The constructor with difficulty for an enemy-type character
 * @param name The name of the enemy
 * @param race The race of the enemy
 * @param style The fighting-style of the enemy
 * @param difficulty The level of the Enemy
 * @return A pointer to a new Enemy object
 */
Enemy::Enemy(string name, Race race, Style style, int difficulty) : Character(name, race, style)
{
}

/**
 * @brief The default deconstructor for the Enemy class 
 */
Enemy::~Enemy()
{
}