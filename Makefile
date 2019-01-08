CC=g++
CFLAGS= -Wall


gladiator: gladiator.cpp
	$(CC) $(CFLAGS) -o gladiator gladiator.cpp

tests: test-armor test-human test-warrior test-weapon

test-armor: items/Item.cpp items/Armor.cpp
	$(CC) $(CFLAGS) -o tests/test-armor items/Item.cpp items/Armor.cpp

test-human: races/Race.cpp races/Human.cpp
	$(CC) $(CFLAGS) -o tests/test-human races/Race.cpp races/Human.cpp

test-warrior: styles/Style.cpp styles/Warrior.cpp
	$(CC) $(CFLAGS) -o tests/test-warrior styles/Style.cpp styles/Warrior.cpp

test-weapon: items/Item.cpp items/Weapon.cpp
	$(CC) $(CFLAGS) -o tests/test-weapon items/Item.cpp items/Weapon.cpp

test-potion: items/Item.cpp items/Potion.cpp
	$(CC) $(CFLAGS) -o tests/test-potion items/Item.cpp items/Potion.cpp
