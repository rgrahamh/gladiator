CC=g++
CFLAGS= -Wall

gladiator: gladiator.cpp
	$(CC) $(CFLAGS) -o gladiator gladiator.cpp

test-human: races/Race.cpp races/Human.cpp
	$(CC) $(CFLAGS) -o test-human races/Race.cpp races/Human.cpp
