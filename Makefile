CC=g++
CFLAGS= -Wall

gladiator: gladiator.cpp
	$(CC) $(CFLAGS) -o gladiator gladiator.cpp
