CC=g++
CFLAGS= -Wall


gladiator: gladiator.cpp
	$(CC) $(CFLAGS) -o gladiator gladiator.cpp

tests: test-armor test-character test-weapon

test-armor: items/Item.cpp items/Armor.cpp
	$(CC) $(CFLAGS) -o tests/test-armor items/Item.cpp items/Armor.cpp

test-weapon: items/Item.cpp items/Weapon.cpp
	$(CC) $(CFLAGS) -o tests/test-weapon items/Item.cpp items/Weapon.cpp

test-character: characters/Character.cpp races/Race.cpp styles/Style.cpp
	$(CC) $(CFLAGS) -o tests/test-character characters/Character.cpp races/Race.cpp styles/Style.cpp
	
test-potion: items/Item.cpp items/Potion.cpp
	$(CC) $(CFLAGS) -o tests/test-potion items/Item.cpp items/Potion.cpp
