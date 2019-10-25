/*
** EPITECH PROJECT, 2019
** my_revstr*
** File description:
** do my_revstr
*/

#include "../include/palindrome.h"

char *revstr(char *str)
{
    int	num;
    int	lenght;
    char opmet;
    num = 0;
    lenght = my_strlen(str) - 1;
    while (num < lenght) {
        opmet = str[num];
        str[num] = str[lenght];
        str[lenght] = opmet;
        num++;
        lenght--;
    } return (str);
}
