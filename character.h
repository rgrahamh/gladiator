#ifndef CHARACTER.H
#define CHARACTER.H

enum styles { WARRIOR, MAGE, CROSSFIGHTER }

struct stylesListing {
    Warrior* warrior;
    Crossfighter* crossfighter;
    Mage* mage;
} typedef stylesList

//An inventory slot; kept in an array for the full inventory.
struct slot{
    unsigned int amount;
    void* item;
    bool isEquipped;
} typedef inventorySlot;

//Stores indicies of equipment in inventory; -1 if unequipped.
struct equipment{
    int helmet;
    int armor;
    int pants;
    int gloves;
    int dominantHand;
    int nonDominantHand;
    int ring[10];
    int helmet;
} typedef equippedItems;

struct spellInfo{
    string name; //Name of the spell
    unsigned int cost; //Energy cost of the spell
    unsigned char effect; //Effect of the spell (damaging, healing, stun, etc.)
    unsigned int power; //Power of the spell (amount of damage, amount of healing, turns blinded, percent defense lowered, etc.)
} typedef spell

struct spellbookStruct{
    spell* spells;
    unsigned int pages;
} typedef tome

class Character{
    private:
        //Maybe add alignment later?
        string name;
        styles currentStyle;
        stylesList style;
        unsigned int experience;
        unsigned int level;
        int maxHealth;
        int currHealth;
        int maxEnergy;
        int currEnergy;
        unsigned int attack;
        unsigned int magicAttack;
        unsigned int defense;
        unsigned int magicDefense;
        unsigned int weaponProficiency;
        unsigned int spellsKnown;
        unsigned int carryingWeight; //How much the player can carry
        unsigned int carryingCapacity; //How much the carrying capacity of the player is
        unsigned int gold; //How much gold the player has
        tome* spellbook;

        //Functions
        void levelUp();
        int calcInitialHealth();
        int calcInitialAttack();
        int calcInitialMagicAttack();
        int calcInitialDefense();
        int calcInitialMagicDefense();
        int calcInitialEnergy();

    public:
        //Constructors
        character(int hp, int e, unsigned int pa, unsigned int ma, unsigned int pd, unsigned int md);
        
        //Deconstructors
        ~character();
        
        //Getters
        int getHealth();
        int getEnergy();
        unsigned int getAttack();
        unsigned int getMagicAttack();
        unsigned int getDefense();
        unsigned int getMagicDefense();
        unsigned int getName();
        bool isFullHealth();
        bool isFullEnergy();
        unsigned int getExperience();
        unsigned int getLevel();
        unsigned int getWeaponProficiency(int weaponType);
        string* getSpells();
        unsigned int getGold();
        unsigned int getCarryingCapacity();
        unsigned int getCarryingWeight();
        
        //Setters
        void setName();
        void addSpell();
        void addExperience();

        //Misc
        void heal();
        void takeDamage();
        void addItem();
        void removeItem();
        void equipItem(str itemName);
}
#endif
