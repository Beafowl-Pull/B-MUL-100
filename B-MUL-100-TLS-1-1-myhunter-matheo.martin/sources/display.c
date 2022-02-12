/*
** EPITECH PROJECT, 2021
** display.c
** File description:
** UwU
*/

#include <SFML/Graphics.h>
#include "../include/structure.h"
#include "../include/my.h"

sfVector2f display(var_t var, sfVector2f pos, sfIntRect rect,
score_t *score)
{
    sfEvent event;

    sfSprite_setTexture(var.sprit_background, var.texture_background, sfTrue);
    scan_events(var.window, event, &pos, score);
    sfSprite_setTexture(var.sprit_plan, var.texture_plan, sfTrue);
    sfSprite_setTextureRect(var.sprit_plan, rect);
    sfSprite_setPosition(var.sprit_plan, pos);
    sfRenderWindow_clear(var.window, sfBlack);
    sfRenderWindow_drawSprite(var.window, var.sprit_background, NULL);
    sfRenderWindow_drawSprite(var.window, var.sprit_plan, NULL);
    sfRenderWindow_display(var.window);
    return (pos);
}
