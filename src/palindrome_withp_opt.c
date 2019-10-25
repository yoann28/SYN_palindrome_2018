/*
** EPITECH PROJECT, 2019
** palin
** File description:
** drometwo
*/

#include "../include/palindrome.h"

void freeab(char *str, char *arr)
{
    free(str);
    free(arr);
}

void display_step(int i, int c, data_t *p)
{
    my_putnbr(i);
    my_putstr(" leads to ");
    my_putnbr(p->data);
    my_putstr(" in ");
    my_putnbr(c);
    my_putstr(" iteration(s) in base ");
    my_putnbr(p->base);
    my_putstr("\n");
    p->temp++;
}

void palindromic(data_t *p)
{
    int i = 1;
    while (i <= p->data) {
        ppalindrome(p, i);
        i++;
    } if (p->temp > 0)
        exit(0);
    my_putstr("no solution\n");
    exit(0);
}

int ppalindrome(data_t *p, int i)
{
    char *str = malloc(sizeof(char) * 1000);
    char *arr = malloc(sizeof(char) * 1000);
    int c[2];
    toto(p);
    base_conversion(str, i, p->base);
    base_conversion(arr, p->data, p->base);
    c[0] = 0;
    while (c[0] <= p->imax && my_strlen(str) < 10
    && my_strlen(arr) < 10) {
        if (my_strcmp(revstr(str), arr) == 0 && c[0] >= p->imin) {
            display_step(i, c[0], p);
            freeab(str, arr);
            return (0);
        } c[1] = decimal(str, p->base);
        c[1] += decimal(revstr(str), p->base);
        base_conversion(str, c[1], p->base);
        c[0]++;
    } freeab(str, arr);
    return (0);
}
