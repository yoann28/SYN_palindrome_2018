/*
** EPITECH PROJECT, 2019
** make
** File description:
** make
*/

#include "../include/palindrome.h"

void test(int ac, char **av, data_t *p)
{
    if (ac > 2 && ac == 7) {
        if (my_strcmp(av[1], "-p") == 0 && my_strcmp(av[3], "-b")
        == 0 && my_strcmp(av[5], "-imin") == 0) {
            p->pflag = 1;
            p->data = my_getnbr((av[1 + 1]));
            p->base = my_getnbr((av[3 + 1]));
            p->imin = my_getnbr((av[5 + 1]));
            palindromic(p);
        } else if (p->nflag == 1 || (p->data < 0 && p->base < 2)
        || (p->base > 10 && p->imin < 0))
            print_invalid();
        test3(ac, av, p);
    }
}

void test3(int ac, char **av, data_t *p)
{
    if (my_strcmp(av[1], "-p") == 0 && my_strcmp(av[3], "-b")
    == 0 && my_strcmp(av[5], "-imax") == 0) {
        p->pflag = 1;
        p->data = my_getnbr((av[1 + 1]));
        p->base = my_getnbr((av[3 + 1]));
        p->imax = my_getnbr((av[5 + 1]));
        palindromic(p);
    } else if (p->nflag == 1 || (p->data < 0 && p->base < 2)
    || (p->base > 10 && p->imax < 0))
        print_invalid();
}

void test1(int ac, char **av, data_t *p)
{
    if (ac > 2 && ac == 3) {
        if (my_strcmp(av[1], "-n") == 0) {
            p->nflag = 1;
            p->data = my_getnbr((av[1 + 1]));
            p->base = 10;
            npalindrome(p);
        } test6(ac, av, p);
    } if (ac > 2 && ac == 5) {
        test12(ac, av, p);
    } test(ac, av, p);
    test4(ac, av, p);
    if (((my_strcmp(av[1], "-n") != 0) && (my_strcmp(av[1], "-p") != 0))
    || ((my_strcmp(av[3], "-b") != 0) && (my_strcmp(av[3], "-imin") != 0))
    || ((my_strcmp(av[3], "-b") != 0) && (my_strcmp(av[3], "-imax") != 0))
    || ((my_strcmp(av[5], "-imin") != 0)
    && (my_strcmp(av[5], "-imax") != 0))) {
        print_invalid();
        exit (84);
    }
}

void test2(int ac, char **av, data_t *p)
{
    if (my_strcmp(av[1], "-p") == 0 && my_strcmp(av[3], "-b") == 0) {
        p->pflag = 1;
        p->data = my_getnbr((av[1 + 1]));
        p->base = my_getnbr((av[3 + 1]));
        palindromic(p);
    } else if (p->nflag == 1 || (p->data < 0 && p->base < 2)
    || (p->base > 10))
        print_invalid();
    if ((p->nflag == 0 && p->pflag == 0) || p->imax < p->imin
    || (p->pflag == 1 && is_this_a_palindrome(p) != 0))
        print_invalid();
}

void test6(int ac, char **av, data_t *p)
{
    if (my_strcmp(av[1], "-p") == 0) {
        p->pflag = 1;
        p->data = my_getnbr((av[1 + 1]));
        p->base = 10;
        palindromic(p);
    }
}
