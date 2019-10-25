/*
** EPITECH PROJECT, 2019
** put
** File description:
** nbr
*/

#include "../include/palindrome.h"

void my_putnbr(int nbr)
{
    int	i;
    i = 0;
    if (nbr <= 9 && nbr >= 0)
        my_putchar(nbr + '0');
    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * (- 1);
        if (nbr <= 9 && nbr >= 0)
            my_putnbr(nbr);
    } if (nbr > 9) {
        i = nbr % 10;
        my_putnbr(nbr / 10);
        my_putchar(i + '0');
    }
}
