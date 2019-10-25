/*
** EPITECH PROJECT, 2019
** usage
** File description:
** usage
*/

#include "../include/palindrome.h"

void usage1(void)
{
    my_putstr("\t-b base\t\tbase in which the procedure will be executed ");
    my_putstr("(1");
    my_putchar(60);
    my_putstr("b");
    my_putchar(60);
    my_putchar(61);
    my_putstr("10) [def: 10]\n");
    my_putstr("\t-imin i\t\tminimum number of iterations, included (");
    my_putchar(62);
    my_putchar(61);
    my_putstr("0) ");
    my_putstr("[def: 0]\n");
    my_putstr("\t-imax i\t\tmaximum number of iterations, included (");
    my_putchar(62);
    my_putchar(61);
    my_putstr("0) ");
    my_putstr("[def: 100]\n");
}

void usage(char *av)
{
    my_putstr("USAGE\n");
    my_putstr("\t");
    my_putstr(av);
    my_putstr(" -n number -p palindrome [-b base] [-imin i] ");
    my_putstr("[-imax i]\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\t-n n\t\tinteger to be transformed (");
    my_putchar(62);
    my_putchar(61);
    my_putstr("0)\n");
    my_putstr("\t-p pal\t\tpalindromic number to be obtained (incompatible ");
    my_putstr("with the -n\n");
    my_putstr("\t\t\toption) (");
    my_putchar(62);
    my_putchar(61);
    my_putstr("0)\n");
    my_putstr("\t\t\tif defined, all fitting values of n will be output\n");
    usage1();
    exit(0);
}
