/*
** EPITECH PROJECT, 2019
** base
** File description:
** base
*/

#include "../include/palindrome.h"

int decimal(char *n, int b)
{
    int a = my_strlen(n) - 1;
    int str[3] = {1, a, 0};
    if (b == 10)
        return (my_getnbr(n));
    while (str[1] >= 0) {
        if (tool(n[str[1]]) >= b)
            return (-1);
        str[2] += tool(n[str[1]]) * str[0];
        str[0] *= b;
        str[1]--;
    } return (str[2]);
}

void base_conversion(char *str, int n, int b)
{
    int c = 0;
    char array[11] = "0123456789";
    while (n != 0) {
        str[c] = array[n % b];
        n = n / b;
        c++;
    } str[c] = '\0';
}
