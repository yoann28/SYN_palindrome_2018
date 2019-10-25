/*
** EPITECH PROJECT, 2019
** make
** File description:
** make
*/

#include "../include/palindrome.h"

void test8(int ac, char **av, data_t *p)
{
    if (my_strcmp(av[1], "-n") == 0 && my_strcmp(av[3], "-imin") == 0) {
        p->nflag = 1;
        p->data = my_getnbr((av[1 + 1]));
        p->base = 10;
        p->imin = my_getnbr((av[3 + 1]));
        npalindrome(p);
    } else if (p->pflag == 1 || (p->data < 0 && p->base < 2)
    || ((p->base > 10) && (p->imin < 0)))
        print_invalid();
}

void test9(int ac, char **av, data_t *p)
{
    if (my_strcmp(av[1], "-n") == 0 && my_strcmp(av[3], "-imax") == 0) {
        p->nflag = 1;
        p->data = my_getnbr((av[1 + 1]));
        p->base = 10;
        p->imax = my_getnbr((av[3 + 1]));
        npalindrome(p);
    } else if (p->pflag == 1 || (p->data < 0 && p->base < 2)
    || ((p->base > 10) && (p->imax < 0)))
        print_invalid();
}

void test10(int ac, char **av, data_t *p)
{
    if (my_strcmp(av[1], "-p") == 0 && my_strcmp(av[3], "-imin") == 0) {
        p->pflag = 1;
        p->data = my_getnbr((av[1 + 1]));
        p->base = 10;
        p->imin = my_getnbr((av[3 + 1]));
        palindromic(p);
    } else if (p->nflag == 1 || (p->data < 0 && p->base < 2)
    || ((p->base > 10) && (p->imin < 0)))
        print_invalid();
}

void test11(int ac, char **av, data_t *p)
{
    if (my_strcmp(av[1], "-p") == 0 && my_strcmp(av[3], "-imax") == 0) {
        p->pflag = 1;
        p->data = my_getnbr((av[1 + 1]));
        p->base = 10;
        p->imax = my_getnbr((av[3 + 1]));
        palindromic(p);
    } else if (p->nflag == 1 || (p->data < 0 && p->base < 2)
    || ((p->base > 10) && (p->imax < 0)))
        print_invalid();
}

void test12(int ac, char **av, data_t *p)
{
    test7(ac, av, p);
    test8(ac, av, p);
    test9(ac, av, p);
    test10(ac, av, p);
    test11(ac, av, p);
    test2(ac, av, p);
}
