# Makefile
CC = gcc
CFLAGS = -Wall -Wextra

# Build the monster game
monster_game: src/main.c src/monster_game.c monster_mood.h
	$(CC) $(CFLAGS) src/main.c src/monster_game.c -o monster_game

# Clean up compiled files
clean:
	rm -f monster_game