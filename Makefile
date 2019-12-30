CC=g++
CFLAGS= -Wall

ITEMS= items/Armor.cpp items/Item.cpp items/Potion.cpp items/Weapon.cpp items/item_construction/ArmorConstruction.cpp items/item_construction/WeaponConstruction.cpp items/item_construction/PotionConstruction.cpp
RACES= races/Race.cpp races/Human.cpp
STYLES= styles/Style.cpp styles/Warrior.cpp
CHARACTERS= characters/Player.cpp characters/Enemy.cpp characters/Character.cpp 

gladiator: gladiator.cpp
	$(CC) $(CFLAGS) -o gladiator gladiator.cpp $(ITEMS) $(RACES) $(STYLES) $(CHARACTERS)
