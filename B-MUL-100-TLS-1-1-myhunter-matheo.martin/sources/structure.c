/*
** EPITECH PROJECT, 2021
** structure.c
** File description:
** UwU
*/

#include <SFML/Graphics.h>
#include <time.h>
#include "../include/structure.h"

var_t structure (void)
{
    var_t var;
    sfVideoMode mode = {1600, 900, 32};

    var.window = sfRenderWindow_create(mode, "My_hunter", sfClose, NULL);
    var.texture_background = sfTexture_createFromFile("bg.png", NULL);
    var.texture_plan = sfTexture_createFromFile("sprite.png", NULL);
    var.sprit_background = sfSprite_create();
    var.sprit_plan = sfSprite_create();
    var.clock = sfClock_create();
    return (var);
}
