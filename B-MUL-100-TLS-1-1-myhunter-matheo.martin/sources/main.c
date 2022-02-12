/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** UwU
*/

#include "../include/my.h"

int main (int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        my_hunter_helper();
        return (0);
    } else {
        my_hunter();
    }
    return (0);
}
