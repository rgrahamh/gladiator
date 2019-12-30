#include "ItemConstruction.h"

/**
 * @breif Constructs and passes back commonly created pieces of armor
 * @param armorName The name of the piece of armor being constructed
 * @return A pointer to the new piece of armor
 */
Armor* constructArmor(string armorName) {
    //CHEST
    if(armorName.compare("Leather Vest") == 0) {
        return new Armor(armorName, 5.0, 5.0, 5, 2, CHEST);
    }
    else if(armorName.compare("Iron Chestplate") == 0) {
        return new Armor(armorName, 15.0, 15.0, 7, 4, CHEST);
    }
    else if(armorName.compare("Steel Chestplate") == 0) {
        return new Armor(armorName, 17.0, 20.0, 10, 5, CHEST);
    }

    //HELMETS
    else if(armorName.compare("Leather Helmet") == 0) {
        return new Armor(armorName, 3.0, 3.0, 2, 2, HELMET);
    }
    else if(armorName.compare("Iron Helmet") == 0) {
        return new Armor(armorName, 5.0, 7.0, 5, 2, HELMET);
    }
    else if(armorName.compare("Leather Helmet") == 0) {
        return new Armor(armorName, 7.0, 10.0, 8, 3, HELMET);
    }

    //GLOVES
    else if(armorName.compare("Leather Gloves") == 0) {
        return new Armor(armorName, 2.0, 3.0, 2, 2, GLOVES);
    }
    else if(armorName.compare("Iron Gauntlets") == 0) {
        return new Armor(armorName, 3.0, 5.0, 5, 2, GLOVES);
    }
    else if(armorName.compare("Steel Gauntlets") == 0) {
        return new Armor(armorName, 5.0, 8.0, 6, 3, GLOVES);
    }

    //BOOTS
    else if(armorName.compare("Leather Boots") == 0) {
        return new Armor(armorName, 2.0, 3.0, 2, 2, GLOVES);
    }
    else if(armorName.compare("Iron Boots") == 0) {
        return new Armor(armorName, 3.0, 5.0, 5, 2, GLOVES);
    }
    else if(armorName.compare("Steel Boots") == 0) {
        return new Armor(armorName, 5.0, 8.0, 6, 3, GLOVES);
    }

    return NULL;
}
