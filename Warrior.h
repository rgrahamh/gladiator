#ifndef WARRIOR.H
#define WARRIOR.H
#include "style.h"
class Warrior :: Style {
    public:
        Warrior();
        ~Warrior();
        int calcInitialHealth();
        int calcInitialAttack();
        int calcInitialMagicAttack();
        int calcInitialDefense();
        int calcInitialMagicResist();
        int calcInitialEngergy();
}
#endif
