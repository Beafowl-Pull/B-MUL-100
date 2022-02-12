/*
** EPITECH PROJECT, 2021
** my_hunter.c
** File description:
** UwU
*/

#include "../include/structure.h"
#include "../include/my.h"
#include <SFML/Graphics.h>
#include <SFML/System/Time.h>
#include <time.h>

int my_hunter ()
{
    var_t var = structure();
    sfIntRect rect = set_plan(rect);
    sfVector2f pos = set_pos(pos);
    sfClock *clock = sfClock_create();
    score_t score = ini_score();
    sfTime time;
    float seconds;

    while (sfRenderWindow_isOpen(var.window)) {
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 100000.0;
        if (seconds > 1) {
            move_rect(&rect, 110, 440);
            sfClock_restart(clock);
        }
        score.i = set_posis(&pos, &rect, score.i);
        pos = display(var, pos, rect, &score);
    }
    return (0);
}
