#define PTR_SIZE sizeof(void *)
#include <iostream>
#include <string>
#include "characters/Player.h"
#include "styles/Warrior.h"
#include "races/Human.h"

using namespace std;

enum styles
{
    MAGE,
    WARRIOR,
    DUALFIGHTER
};
enum races
{
    HUMAN,
    DWARF,
    ELF
};

string getInput(string question, int isCaps = 0);
Player *instantiatePlayer(int r, int s);

int main()
{
    string name = getInput("Welcome to The Arena! Tell me, adventurer, what's your name?", 1);
    string strStyle, strRace;
    while (name.length() == 0)
    {
        name = getInput("Come on now, don't be shy! Tell me what your name is!", 1);
    }
    strStyle = getInput("Very well then, " + name + ". Are you a mage, a warrior, or a dualfighter?");
    while (strStyle.compare("warrior") != 0 && strStyle.compare("mage") != 0 && strStyle.compare("dualfighter"))
    {
        strStyle = getInput("I've never heard of a " + strStyle + "! Are you a mage, a warrior, or a dualfighter?");
    }
    strRace = getInput("OK, then. What's your race?");
    while (strRace.compare("human") != 0 && strRace.compare("dwarf") != 0 && strRace.compare("elf") != 0)
    {
        strRace = getInput("Don't lie to me, I can clearly tell what you aren't a " + strRace + "! Now, what race are you?");
    }
    cout << name << ", the " << strRace << " " << strStyle << endl;

    // determine style and race
    int s, r;
    if (strStyle.compare("warrior") == 0)
    {
        s = WARRIOR;
    }
    else if (strStyle.compare("mage") == 0)
    {
        s = MAGE;
    }
    else if (strStyle.compare("dualfighter") == 0)
    {
        s = DUALFIGHTER;
    }
    else
    {
        s = WARRIOR;
    }

    if (strRace.compare("human") == 0)
    {
        r = HUMAN;
    }
    else if (strRace.compare("dwarf") == 0)
    {
        r = DWARF;
    }
    else if (strRace.compare("elf") == 0)
    {
        r = ELF;
    }
    else
    {
        r = HUMAN;
    }

    Player player = *instantiatePlayer(r, s);
    cout << player.getCharacterAbilityString(player.getCharacterAbilities());

    return 0;
}

/**
 * @brief Returns the input string that has been sanitized by converting to lower case
 * @param question The question to ask the player
 * @param isCaps A boolean value that lets the function know if the returned value should be capitalized
 * @return The string value after being sanitized
 */
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
 * @brief Returns a pointer to a new Player object
 * @param r The desired race of the player
 * @param s The desired fighting style of the player
 * @return A pointer to a new Player object with desired race and style 
 */
Player *instantiatePlayer(int r, int s)
{
    Style *style;
    Race *race;

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

    return new Player("David", *race, *style);
}
