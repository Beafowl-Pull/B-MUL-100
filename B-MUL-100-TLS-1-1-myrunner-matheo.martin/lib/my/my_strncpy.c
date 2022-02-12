/*
** EPITECH PROJECT, 2022
** My_Runner
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    return (dest);
}
