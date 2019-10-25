/*
** EPITECH PROJECT, 2019
** str
** File description:
** cmp
*/

#include "../include/palindrome.h"

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
