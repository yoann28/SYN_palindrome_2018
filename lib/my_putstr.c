/*
** EPITECH PROJECT, 2019
** put
** File description:
** str
*/

#include "../include/palindrome.h"

void my_putstr(char *str)
{
    int j;
    j = 0;
    while (str[j] != '\0') {
        my_putchar(str[j]);
        j++;
    }
}
