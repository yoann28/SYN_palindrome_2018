/*
** EPITECH PROJECT, 2019
** get
** File description:
** nbr
*/

#include "../include/palindrome.h"

int my_getnbr(char *str)
{
    int i;
    int j;
    int n;
    j = 1;
    i = 0;
    while (str[i] != '\0' && (str[i] == '+' || str[i] == '-')) {
        if (str[i] == '-') {
            j = j * -1;
        } i++;
    } n = 0;
    while (str[i] >= 48 && str[i] <= 57) {
        n = (n * 10) + str[i] - 48;
        i++;
    } return (n * j);
}
