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
}

/**
 * @brief Destructor for Player class
 */
Player::~Player()
{
}
