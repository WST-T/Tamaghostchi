/**
 * @file main.c
 * @brief Tiny Monster Mood Tracker - Main Program Entry Point
 * @description Interactive game where players interact with a mood-changing monster
 *
 * This program demonstrates a fun, interactive game concept using C programming
 * with ASCII art, user interactions, and pseudo-random mood generation.
 *
 * @author WST-T / 文森特
 * @date 2024
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Import mood definitions and function declarations
/**
 * @enum MonsterMood
 * @brief Represents different emotional states of the monster
 */
typedef enum {
    HAPPY,
    EXCITED,
    SLEEPY,
    HUNGRY,
    CONFUSED
} MonsterMood;

// Function prototypes (declarations from monster_game.c)
/**
 * @brief Prints ASCII art representation of the monster
 * @param mood Current monster mood
 */
void print_monster(MonsterMood mood);

/**
 * @brief Handles user interaction with the monster
 * @return MonsterMood Resulting mood after interaction
 */
MonsterMood interact_with_monster();

/**
 * @brief Main program entry point
 *
 * Manages the game loop, allowing multiple interactions with the monster.
 * Provides a welcome message, handles user interactions, and offers
 * the option to play multiple times.
 *
 * @return int Program exit status (0 for successful execution)
 */
int main() {
    // Variable to control game replay
    char play_again;

    // Welcome message
    printf("🌈 Welcome to Tiny Monster Mood Tracker!! 🌈\n");
    printf("Meet your adorable little companion!!\n\n");

    // Game interaction loop
    do {
        // Get monster's mood through user interaction
        MonsterMood current_mood = interact_with_monster();

        // Display monster with current mood
        print_monster(current_mood);

        // Ask if user wants to continue playing
        printf("\nWant to play again? (y/n): ");
        scanf(" %c", &play_again);
    } while (play_again == 'y' || play_again == 'Y');

    // Farewell message
    printf("\nGoodbye! Your tiny monster will miss you!! 💕\n");

    return 0;
}