/*
** EPITECH PROJECT, 2021
** plan.c
** File description:
** UwU
*/

#include <SFML/Graphics.h>

void move_rect (sfIntRect *plan, int gap, int max)
{
    plan -> left += gap;
    if (plan->left == max)
        plan->left = 0;
}

sfIntRect set_plan(sfIntRect plan)
{
    plan.top = 0;
    plan.left = 0;
    plan.width = 110;
    plan.height = 110;
    return (plan);
}
