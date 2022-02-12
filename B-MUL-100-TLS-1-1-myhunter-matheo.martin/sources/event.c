/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** UwU
*/

#include <SFML/Graphics.h>
#include "../include/my.h"

void scan_events(sfRenderWindow *window, sfEvent event, sfVector2f *pos,
score_t *score)
{
    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseButtonPressed)
            manage_mouse_click(event.mouseButton, pos, window,
            score);
    }
}
