#include <string>

using namespace std;

class Race
{
public:
  Race(string t, double a, double d, double c, double r, double e, double h, double sp, double sk, double l);
  ~Race();
  double getAttack();
  double getDefense();
  double getConstitution();
  double getResilience();
  double getEnergy();
  double getHealth();
  double getSpeed();
  double getSkill();
  double getLuck();
  bool *getAbilities()
  {
    return this->abilities;
  }
  void setAbilities(bool *ab)
  {
    copy(ab, ab + sizeof(ab), this->abilities);
  }

private:
  enum abils
  {
    LANCE,
    SWORD,
    AXE,
    LIGHT,
    DARK,
    ANIMA
  };
  string type;
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