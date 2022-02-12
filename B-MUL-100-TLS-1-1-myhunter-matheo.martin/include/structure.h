/*
** EPITECH PROJECT, 2021
** structure
** File description:
** UwU
*/

#include <SFML/Graphics.h>

#ifndef STRUCTURE_H_
#define STRUCTURE_H_

typedef struct var
{
    sfRenderWindow *window;
    sfTexture *texture_background;
    sfTexture *texture_plan;
    sfSprite *sprit_background;
    sfSprite *sprit_plan;
    sfClock *clock;
    sfVector2f position;
    sfTime time;
    float seconds;
} var_t;

typedef struct score {
    int score;
    int life;
    int i;
}score_t;

#endif
