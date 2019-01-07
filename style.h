#ifndef STYLE.H
#define STYLE.H
class Style {
    private:
        unsigned int styleExp;
        unsigned int level;

        void levelUp();
    public:
        int calcInitialHealth();
        int calcInitialAttack();
        int calcInitialMagicAttack();
        int calcInitialDefense();
        int calcInitialMagicDefense();
        int calcInitialEnergy();
        void addExperience();

#endif

//SEPERATED OUT STYLE AND NORMAL CHARACTER; CHARACTER LEVEL IS DIFFERENT, RACES SHOULD INHERIT DIRECTLY FROM CHARACTER WHEREAS STYLE WILL BE AN ATTRIBUTE IN CHARACTER.
