/*
** EPITECH PROJECT, 2019
** tool
** File description:
** tool
*/

#include "../include/palindrome.h"

int tool(char c)
{
    if (c >= 48 && c <= 57)
        return (c - 48);
    else
        return (c - 55);
}

unsigned long long basic(unsigned long long nbr, int base)
{
    unsigned int data[3] = {0, 0, 0};

    if (nbr == 0 || base == 10)
        return (nbr);
    if (base < 2 || base > 10)
        return (-1);
    data[1] = nbr % base;
    data[2] = nbr / base;
    data[0] = (data[1] + (10 * basic(data[2], base)));
    return (data[0]);
}
