CC=g++
CFLAGS= -Wall


gladiator: gladiator.cpp
	$(CC) $(CFLAGS) -o gladiator gladiator.cpp characters/Player.cpp characters/Character.cpp races/Race.cpp races/Human.cpp styles/Style.cpp styles/Warrior.cpp items/Armor.cpp items/Item.cpp items/Potion.cpp items/Weapon.cpp
