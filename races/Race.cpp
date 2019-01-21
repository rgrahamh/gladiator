#include "Race.h"

/**
 * @brief The default constructor for Race
 * @remarks It doesn't make sense to implement this constructor in the context of Gladiator; left stubbed. 
 */
Race::Race() {
}

/**
 * @brief The parameterized constructor for Race
 * @param t A integer enum value of the race; i.e. 'HUMAN == 0'
 * @param a A double value for attack
 * @param d A double value for defense
 * @param c A double value for constitution
 * @param r A double value for resilience
 * @param e A double value for energy
 * @param h A double value for health
 * @param sp A double value for speed
 * @param sk A double value for skill
 * @param l A double value for luck
 * @return A pointer to a race object with desired attributes
 */
Race::Race(int t, double a, double d, double c, double r, double e, double h, double sp, double sk, double l) {
    this->type = t;
    this->attack = a;
    this->defense = d;
    this->constitution = c;
    this->resilience = r;
    this->energy = e;
    this->health = h;
    this->speed = sp;
    this->skill = sk;
    this->luck = l;
}

/**
 * @brief The default deconstructor for Race
 * @remarks It doesn't make sense to implement this deconstructor in the context of Gladiator; left stubbed. 
 */
Race::~Race() {
}

/**
 * @brief The getter function for type
 * @return A integer enum value of the race's type 
 */
int Race::getType() {
    return this->type;
}

/**
 * @brief The getter function for attack
 * @return A double value of the race's attack 
 */
double Race::getAttack() {
    return this->attack;
}

/**
 * @brief The getter function for defense
 * @return A double value of the race's defense 
 */
double Race::getDefense() {
    return this->defense;
}

/**
 * @brief The getter function for constitution
 * @return A double value of the race's constitution 
 */
double Race::getConstitution() {
    return this->constitution;
}

/**
 * @brief The getter function for resilience
 * @return A double value of the race's resilience 
 */
double Race::getResilience() {
    return this->resilience;
}

/**
 * @brief The getter function for energy
 * @return A double value of the race's energy 
 */
double Race::getEnergy() {
    return this->energy;
}

/**
 * @brief The getter function for health
 * @return A double value of the race's health 
 */
double Race::getHealth() {
    return this->health;
}

/**
 * @brief The getter function for speed
 * @return A double value of the race's speed 
 */
double Race::getSpeed() {
    return this->speed;
}

/**
 * @brief The getter function for skill
 * @return A double value of the race's skill 
 */
double Race::getSkill() {
    return this->skill;
}

/**
 * @brief The getter function for luck
 * @return A double value of the race's luck 
 */
double Race::getLuck() {
    return this->luck;
}

/**
 * @brief The getter function for abilities
 * @return A bool array value of the race's abilities 
 */
bool* Race::getRaceAbilities() {
    return this->abilities;
}

/**
 * @brief The setter function for abilities
 * @param ab A bool array of desired abilities to be set for the race
 */
void Race::setRaceAbilities(bool* ab) {
    copy(ab, ab + sizeof(ab), this->abilities);
}

/**
 * @brief A debugging utility to be able to view the abilities of a race
 * @return The string value of the race's abilties 
 */
string Race::getRaceAbilityString(bool* ab) {
    string result = "";
    (ab[0]) ? result = result + " LANCE" : result = result + "";
    (ab[1]) ? result = result + " SWORD" : result = result + "";
    (ab[2]) ? result = result + " AXE" : result = result + "";
    (ab[3]) ? result = result + " LIGHT" : result = result + "";
    (ab[4]) ? result = result + " DARK" : result = result + "";
    (ab[5]) ? result = result + " ANIMA" : result = result + "";
    return result;
}