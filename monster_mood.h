#ifndef MONSTER_MOOD_H
#define MONSTER_MOOD_H

/**
 * @enum MonsterMood
 * @brief Represents different emotional states of the monster
 *
 * Defines the possible mood states for our cute monster character.
 * Each mood corresponds to a unique ASCII art representation.
 */
typedef enum {
    HAPPY,      ///< Content and cheerful mood
    EXCITED,    ///< Energetic and playful mood
    SLEEPY,     ///< Tired and drowsy mood
    HUNGRY,     ///< Wanting food or attention
    CONFUSED    ///< Puzzled or uncertain mood
} MonsterMood;

#endif // MONSTER_MOOD_H