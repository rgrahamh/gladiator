#ifndef STYLE_H
#define STYLE_H

#include <string>

using namespace std;

#ifndef WEAPONS
#    define WEAPONS
enum weapons { LANCE, SWORD, AXE, LIGHT, DARK, ANIMA };
#endif

enum styles { WARRIOR, MAGE, DUALFIGHTER };

/**
 * @class Style <Style.h>
 * @brief A class to describe fighting styles for a player or enemy
 */
class Style {
  public:
    Style();
    Style(int t, double a, double d, double c, double r, double e, double h, double sp, double sk, double l);
    ~Style();
    int getType();
    double getAttack();
    double getDefense();
    double getConstitution();
    double getResilience();
    double getEnergy();
    double getHealth();
    double getSpeed();
    double getSkill();
    double getLuck();
    bool* getStyleAbilities();
    void setStyleAbilities(bool* ab);
    string getStyleAbilityStr(bool* ab);

  private:
    int type;
    double attack;
    double defense;
    double constitution;
    double resilience;
    double energy;
    double health;
    double speed;
    double skill;
    double luck;
    bool abilities[6];
};

#endif