CC=g++
CFLAGS= -Wall


gladiator: gladiator.cpp
	$(CC) $(CFLAGS) -o gladiator gladiator.cpp characters/Player.cpp characters/Character.cpp races/Race.cpp races/Human.cpp styles/Style.cpp styles/Warrior.cpp items/Armor.cpp items/Item.cpp items/Potion.cpp items/Weapon.cpp

tests: test-armor test-character test-weapon

test-armor: items/Item.cpp items/Armor.cpp
	$(CC) $(CFLAGS) -o tests/test-armor items/Item.cpp items/Armor.cpp

test-weapon: items/Item.cpp items/Weapon.cpp
	$(CC) $(CFLAGS) -o tests/test-weapon items/Item.cpp items/Weapon.cpp

test-character: characters/Character.cpp races/Race.cpp styles/Style.cpp
	$(CC) $(CFLAGS) -o tests/test-character characters/Character.cpp races/Race.cpp styles/Style.cpp

test-player: characters/Player.cpp races/Race.cpp styles/Style.cpp
	$(CC) $(CFLAGS) -o tests/test-player characters/Character.cpp characters/Player.cpp races/Race.cpp races/Human.cpp styles/Style.cpp styles/Warrior.cpp items/Item.cpp items/Armor.cpp items/Potion.cpp items/Weapon.cpp
	
test-potion: items/Item.cpp items/Potion.cpp
	$(CC) $(CFLAGS) -o tests/test-potion items/Item.cpp items/Potion.cpp
