Warrior::Warrior(){
    styleExp = 0;
    level = 0;
}

Warrior::Warrior(int exp, int lvl){
    styleExp = styleExp;
    level = lvl;
}

Warrior::calcInitialHealth(){
    return 20+(lvl*6);
}

Warrior::calcInitialAttack(){
    return 8+(lvl*2);
}

Warrior::calcInitialMagicAttack(){
    return 1;
}

Warrior::calcInitialDefense(){
    return 6+(lvl*3);
}

Warrior::calcInitalMagicDefense(){
    return 1;
}

Warrior::calcInitialEnergy(){
    return 15;
}

Warrior::addExperience(unsigned int exp){
    styleExp += exp;
    if(styleExp < nextLevel){
        levelUp();
    }
}

Warrior::levelUp(){
    level++;
    styleExp = 0;
    nextLevel = (nextLevel * 1.1) + 50;
}
