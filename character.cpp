#include <character.h>
#include <string.h>

using namespace std;

/**
 * Parameterized constructor for character
 * @param n The name of the character
 * @param ct The class type of the character
 * @param lvl The starting level of the character
 * @param hp The maximum health of the character
 * @param e The maximum energy of the character
 * @param pa The physical attack of the character
 * @param ma The magic attack of the character
 * @param d The defense of the character
 * @param md The magic defense of the character
 */
Character::Character(string n, unsigned int lvl, int hp, int e, int pa, int ma, int d, int md){
    name = n;
    currStyle = WARRIOR;
    level = lvl;
    experience = 0;
    maxHealth = hp;
    currHealth = hp;
    maxEnergy = e;
    currEnergy = e;
    attack = pa;
    magicAttack = ma;
    defense = d;
    magicDefense = md;
    spellsKnown = 0;

    inventory = malloc(sizeof(inventorySlot)*256);
    //Initializing the equipment array
    memset(&equipped, 0, sizeof(equipeed));
    memset(&equipped, 0, sizeof(inventorySlot*256));

    carryingWeight = 0;
    carryingCapacity = (strength*10) + 40;
    gold = 0;
    firstEmptyInventorySlot = 0;
}

/**
 * Deconstructor
 */
Character::~Character(){
    free(inventory);
}


//Getters
Character::getHealth(){return currHealth;}

Character::getEnergy(){return currEnergy;}

Character::getPhysicalAttack(){return attack + addedAttack;}

Character::getMagicAttack(){return magicAttack + addedMagicAttack;}

Character::getDefense(){return defense + addedDefense;}

Character::getMagicDefense(){return magicDefense + addedMagicDefense;}

Character::getName(){return name;}

Character::isFullHealth(){return currHealth == maxHealth;}

Character::isFullEnergy(){return currEnergy == maxEnergy;}

Character::getExperience(){return experience;}

Character::getLevel(){return level;}

Character::getWeaponProficiency(int weaponType){return proficiency[i];}
//End of getters

//Setters
Character::setName(string n){ name = n; }
//End of setters

Character::heal(int amountHealed){
    if(currHealth + amountHealed > maxHealth){
        currHealth = maxHealth;
    } else {
        currHealth += amountHealed;
    }
}

/**
 * Take damage based 
 */
Character::takeDamage(unsigned int dmg, char type){
    int damageTaken = dmg - (type == 0)? (defense + addedDefense) : (magicDefense + addedMagicDefense);
    if(damageTaken > currHealth){
        currHealth = 0;
    } else {
        currHealth -= damageTaken;
    }
}

Character::getSpells(){
    string* spellList = malloc(sizeof(string) * spellsKnown);
    for(int i = 0; i < spellsKnown; i++){
        spellList[i] = spellbook.spells[i].name;
    }
    return spellList;
}

Character::addSpell(string spellName, unsigned int cost, unsigned char effect, unsigned int power){
    spellbook = realloc(spellbook, sizeof(spellbook) + sizeof(spell));
    spellbook[spellsKnown].name = spellName;
    spellbook[spellsKnown].cost = cost;
    spellbook[spellsKnown].effect = effect;
    spellbook[spellsKnown].power = power;
    spellsKnown++;
}
