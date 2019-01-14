#include "Enemy.h"

Enemy::Enemy(string name, Race race, Style style) : Character(name, race, style)
{
}

Enemy::Enemy(string name, Race race, Style style, int difficulty) : Character(name, race, style)
{
}

Enemy::~Enemy()
{
}