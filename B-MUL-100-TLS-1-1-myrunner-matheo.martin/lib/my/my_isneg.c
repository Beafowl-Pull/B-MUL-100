/*
** EPITECH PROJECT, 2022
** My_Runner
** File description:
** my_isneg
*/

#include "my.h"

int my_isneg(int nb)
{
    if (nb >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    return (0);
}
