# Makefile
CC = gcc
CFLAGS = -Wall -Wextra

# Build the monster game
monster_game: main.c monster_mood.c monster_mood.h
	$(CC) $(CFLAGS) main.c monster_mood.c -o monster_game

# Clean up compiled files
clean:
	rm -f monster_game