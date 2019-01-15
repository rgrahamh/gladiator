#define PTR_SIZE sizeof(void *)
#include <iostream>
#include <string>
#include "characters/Player.h"
#include "characters/Enemy.h"
#include "styles/Warrior.h"
#include "races/Human.h"

using namespace std;

/**
 * @struct PlayerInfo <gladiator.cpp>
 * @brief A struct to describe a player's chosen attributes
 */
struct
{
    string name; /**< the name of the player */
    int race;    /**< an enum value for the type of race */
    int style;   /**< an enum value for the type of style */
} typedef PlayerInfo;

string getInput(string question, int isCaps = 0);
PlayerInfo getPlayerInfo();
int getStyleType(string style);
int getRaceType(string race);
Player *instantiatePlayer(string n, int r, int s);

int main()
{
    PlayerInfo pi = getPlayerInfo();

    // instantiate Player
    Player player = *instantiatePlayer(pi.name, pi.race, pi.style);

    return 0;
}

string getInput(string question, int isCaps)
{
    string input = "";
    cout << question << endl;
    cin >> input;
    for (unsigned long int i = 0; (i < input.length()); i++)
    {
        if (input[i] >= 65 && input[i] <= 90 && !isCaps)
        {
            input[i] += 32;
        }
    }
    return input;
}

/**
 * @brief Returns a struct of type PlayerInfo (containing name, style, and race) after asking the player some questions
 * @return A struct of type PlayerInfo 
 */
PlayerInfo getPlayerInfo()
{
    string name = getInput("Welcome to The Arena! Tell me, adventurer, what's your name?", 1);
    string s, r;
    int style, race;
    while (name.length() == 0)
    {
        name = getInput("Come on now, don't be shy! Tell me what your name is!", 1);
    }
    s = getInput("Very well then, " + name + ". Are you a mage, a warrior, or a dualfighter?");
    while (s.compare("warrior") != 0 && s.compare("mage") != 0 && s.compare("dualfighter"))
    {
        s = getInput("I've never heard of a " + s + "! Are you a mage, a warrior, or a dualfighter?");
    }
    r = getInput("OK, then. What's your race? Are you a human, dwarf, or elf?");
    while (r.compare("human") != 0 && r.compare("dwarf") != 0 && r.compare("elf") != 0)
    {
        r = getInput("Don't lie to me, I can clearly tell what you aren't a " + r + "! Now, what race are you?");
    }
    cout << name << ", the " << r << " " << s << endl;

    style = getStyleType(s);
    race = getRaceType(r);

    PlayerInfo pi = {
        name,  // name
        style, // style
        race   // race
    };
    return pi;
}

/**
 * @brief A conversion from the string for a style into it's enum equivalent
 * @param style A string value indicating the style
 * @return The desired enumeration value for style
 */
int getStyleType(string style)
{
    int s;
    if (style.compare("warrior") == 0)
    {
        s = WARRIOR;
    }
    else if (style.compare("mage") == 0)
    {
        s = MAGE;
    }
    else if (style.compare("dualfighter") == 0)
    {
        s = DUALFIGHTER;
    }
    else
    {
        s = WARRIOR;
    }

    return s;
}

/**
 * @brief A conversion from the string for a race into it's enum equivalent
 * @param style A string value indicating the race
 * @return The desired enumeration value for race
 */
int getRaceType(string race)
{
    int r;
    if (race.compare("human") == 0)
    {
        r = HUMAN;
    }
    else if (race.compare("dwarf") == 0)
    {
        r = DWARF;
    }
    else if (race.compare("elf") == 0)
    {
        r = ELF;
    }
    else
    {
        r = HUMAN;
    }

    return r;
}

/**
 * @brief Instantiates a new Player object
 * @param n A string value for the Player's name
 * @param r An integer enum value indicating the Player's race
 * @param s An integer enum value indicating the Player's style
 * @return A pointer to a new Player object
 */
Player *instantiatePlayer(string n, int r, int s)
{
    Style *style = determineStyle(s);
    Race *race = determineRace(r);

    return new Player(n, *race, *style);
}

/**
 * @breif Instantiates a new Enemy object
 * @param n The name of the enemy
 * @param r An enum representation of the race of the enemy
 * @param s An enum representation of the style of the enemy
 * @param d The difficulty of the enemy
 */
Enemy *instantiateEnemy(string n, int r, int s, int d)
{
    Style *style = determineStyle(s);
    Race *race = determineRace(r);

    return new Enemy(n, *race, *style, BABY);
}

/**
 * @breif Determines the character's style based on its enumeration
 * @param s The enum representation of the style
 * @return A pointer to an object of the style
 */
Style *determineStyle(int s)
{
    Style *style;

    switch (s)
    {
    // case MAGE:
    //     break;
    case WARRIOR:
        style = new Warrior();
        break;
    // case DUALFIGHTER:
    //     break;
    default:
        style = new Warrior();
    }

    return style;
}

/**
 * @breif Determines the character's race based on its enumeration
 * @param s The enum representation of the race
 * @return A pointer to an object of the race
 */
Race *determineRace(int r)
{
    Race *race;

    switch (r)
    {
    case HUMAN:
        race = new Human();
        break;
    // case DWARF:
    //     break;
    // case ELF:
    //     break;
    default:
        race = new Human();
    }

    return race;
}