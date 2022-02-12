/*
** EPITECH PROJECT, 2021
** pos.c
** File description:
** UwU
*/

#include <SFML/Graphics.h>
#include "../include/my.h"
#include <stdlib.h>

int set_posis (sfVector2f *pos, sfIntRect *plan, int i)
{
    pos -> x += i;
    if (pos -> x >= 1800) {
        plan -> top = 110;
        i = -i;
    }
    if (pos -> x <= -200) {
        plan -> top = 0;
        i = -i;
    }
    return (i);
}

sfVector2f set_pos(sfVector2f pos)
{
    int nb = rand() %400 +10;
    pos.x = -200;
    pos.y = nb;
    return (pos);
}
