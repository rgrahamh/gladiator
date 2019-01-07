#define PTR_SIZE sizeof(void *)
#include <iostream>
#include <string>

using namespace std;

string getInput(string question, int isCaps = 0)
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

int main()
{
    string name = getInput("Welcome to The Arena! Tell me, adventurer, what's your name?", 1);
    string style;
    string race;
    while (name.length() == 0)
    {
        name = getInput("Come on now, don't be shy! Tell me what your name is!");
    }
    style = getInput("Very well then, " + name + ". Are you a mage, a warrior, or a dualfighter?");
    while (style.compare("warrior") != 0 && style.compare("mage") != 0 && style.compare("dualfighter"))
    {
        style = getInput("I've never heard of a " + style + "! Are you a mage, a warrior, or a dualfighter?");
    }
    race = getInput("OK, then. What's your race?");
    while (race.compare("human") != 0 && race.compare("dwarf") != 0 && race.compare("dwarf") != 0)
    {
        race = getInput("Don't lie to me, I can clearly tell what you aren't a " + race + "! Now, what race are you?");
    }
    cout << name << ", the " << race << " " << style << endl;

    return 0;
}
