/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** dup
*/

#include "../include/palindrome.h"

char *my_strdup(char *src)
{
    char *dest;
    int i = 0;
    int a = my_strlen(src) + 1;
    dest = malloc(sizeof(char) * a);
    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
