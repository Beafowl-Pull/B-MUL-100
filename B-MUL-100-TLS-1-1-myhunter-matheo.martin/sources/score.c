/*
** EPITECH PROJECT, 2021
** score.c
** File description:
** UwU
*/

#include "../include/structure.h"
#include "../include/my.h"
#include <SFML/Graphics.h>
#include <stdlib.h>

score_t ini_score(void)
{
    score_t score;

    score.score = 0;
    score.life = 3;
    score.i = 4;
    return (score);
}

void manage_mouse_click(sfMouseButtonEvent event, sfVector2f *pos,
sfRenderWindow *window, score_t *score)
{
    int nb = rand() % 400 + 10;

    if (event.x >= pos ->x && event.x <= pos->x + 110 &&
    event.y >= pos -> y && event.y <= pos -> y + 110) {
        pos -> x = -199;
        pos ->y = nb;
        score -> score = score -> score + 100;
        my_printf("HIT! Score = %d\n", score->score);
        score -> i += 1;
    } else if (score -> life > 0) {
        score -> life = score -> life - 1;
        my_printf("FAIL! Number of life: %d\n", score -> life);
    }
    if (score->life == 0) {
        my_printf("-----------------\nFinal Score: %d\n", score -> score);
        sfRenderWindow_close(window);
    }
}
