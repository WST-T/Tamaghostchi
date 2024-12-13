/**
 * @file monster_game.c
 * @brief Tiny Monster Mood Tracker - Game Logic Implementation
 * @description A playful interactive program featuring a mood-changing monster
 *
 * This file contains the core game mechanics for the Tiny Monster Mood Tracker.
 * It defines the monster's mood states and interaction mechanics.
 *
 * @author WST-T / 文森特
 * @date 2024
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "monster_mood.h"

/**
 * @brief Prints ASCII art representation of the monster based on its current mood
 *
 * This function displays a cute ASCII art monster with a corresponding
 * facial expression and text that reflects its current emotional state.
 *
 * @param mood The current mood of the monster (from MonsterMood enum)
 */
void print_monster(MonsterMood mood) {
    switch(mood) {
        case HAPPY:
            printf("    ^__^\n");
            printf("   (•ᴗ•)  Yay! I'm happy!\n");
            printf("    / >♥\n");
            break;
        case EXCITED:
            printf("    ^__^\n");
            printf("   (⊂((・▽・))⊃  Woohoo!\n");
            printf("    / >💥\n");
            break;
        case SLEEPY:
            printf("    ^__^\n");
            printf("   (￣へ￣)  *yawn*\n");
            printf("    / >💤\n");
            break;
        case HUNGRY:
            printf("    ^__^\n");
            printf("   (•̀ㅂ•́)✧  Feed me!\n");
            printf("    / >🍪\n");
            break;
        case CONFUSED:
            printf("    ^__^\n");
            printf("   (๑•̀ㅂ•́)و✧  Huh?\n");
            printf("    / >❓\n");
            break;
    }
}

/**
 * @brief Handles user interaction with the monster and determines its mood
 *
 * This function provides an interactive menu for the user to choose
 * how they want to interact with the monster. Based on the interaction,
 * the monster's mood is dynamically changed using pseudo-random generation.
 *
 * @return MonsterMood The resulting mood after the interaction
 */
MonsterMood interact_with_monster() {
    int choice;

    // Display interaction menu
    printf("\nHow do you want to interact with your tiny monster?\n");
    printf("1. Pet the monster\n");
    printf("2. Give a cookie\n");
    printf("3. Tell a joke\n");
    printf("4. Sing a lullaby\n");
    printf("5. Tickle the monster\n");
    printf("Enter your choice (1-5): ");

    // Get user input
    scanf("%d", &choice);

    // Seed random number generator
    srand(time(NULL));

    // Determine monster's mood based on interaction
    switch(choice) {
        case 1: return (rand() % 2 == 0) ? HAPPY : EXCITED;
        case 2: return HAPPY;
        case 3: return CONFUSED;
        case 4: return SLEEPY;
        case 5: return (rand() % 2 == 0) ? EXCITED : HAPPY;
        default: return CONFUSED;
    }
}