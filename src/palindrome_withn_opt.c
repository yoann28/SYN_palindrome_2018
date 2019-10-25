/*
** EPITECH PROJECT, 2019
** palin
** File description:
** drome
*/

#include "../include/palindrome.h"

void display_nothing(char *str, char *arr)
{
    my_putstr("no solution\n");
    free(str);
    free(arr);
    exit (0);
}

void display_end(char *str, char *arr, int c, data_t *p)
{
    if (decimal(arr, p->base) == -1) {
        my_putstr("no solution\n");
        exit (0);
    } my_putnbr(p->data);
    my_putstr(" leads to ");
    my_putnbr(decimal(arr, p->base));
    my_putstr(" in ");
    my_putnbr(c);
    my_putstr(" iteration(s) in base ");
    my_putnbr(p->base);
    my_putstr("\n");
    free(str);
    free(arr);
    exit (0);
}

void npalindrome(data_t *p)
{
    int c = 0;
    int rev;
    char *str = malloc(sizeof(char) * 100);
    char *arr;
    toto(p);
    base_conversion(str, p->data, p->base);
    arr = revstr(my_strdup(str));
    while (c <= p->imax && my_strlen(str) < 10
    && my_strlen(arr) < 10) {
        if (my_strcmp(arr, str) == 0 && c >= p->imin)
            display_end(str, arr, c, p);
        rev = decimal(arr, p->base);
        rev = rev + decimal(str, p->base);
        base_conversion(arr, rev, p->base);
        free(str);
        str = revstr(my_strdup(arr));
        free(arr);
        arr = revstr(my_strdup(str));
        c++;
    } display_nothing(str, arr);
}

void toto(data_t *p)
{
    if (p->data < 0) {
        print_invalid();
        exit (84);
    } if (p->base < 2 || p->base > 10 || p->imax < 0
    || p->imin < 0) {
        print_invalid();
        exit (84);
    }
}
