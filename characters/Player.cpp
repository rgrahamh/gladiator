#include "Player.h"

/**
 * @brief Parameterized constructor for the Player character
 * @param n The name of the player
 * @param race The race of the player
 * @param style The style of the player
 * @return A pointer to the Player object
 */
Player::Player(string n, Race* r, Style* s) : Character(n, r, s) {
}

/**
 * @brief Destructor for Player class
 */
Player::~Player() {
}
