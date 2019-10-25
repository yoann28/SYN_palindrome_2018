/*
** EPITECH PROJECT, 2019
** make
** File description:
** make
*/

#include "../include/palindrome.h"

void test4(int ac, char **av, data_t *p)
{
    if (ac > 2 && ac == 7) {
        if (my_strcmp(av[1], "-n") == 0 && my_strcmp(av[3], "-b")
        == 0 && my_strcmp(av[5], "-imin") == 0) {
            p->nflag = 1;
            p->data = my_getnbr((av[1 + 1]));
            p->base = my_getnbr((av[3 + 1]));
            p->imin = my_getnbr((av[5 + 1]));
            npalindrome(p);
        } else if (p->pflag == 1 || (p->data < 0 && p->base < 2 && p->base > 10)
        || (p->base > 10 && p->imin < 0))
            print_invalid();
        test5(ac, av, p);
    }
}

void test5(int ac, char **av, data_t *p)
{
    if (my_strcmp(av[1], "-n") == 0 && my_strcmp(av[3], "-b")
    == 0 && my_strcmp(av[5], "-imax") == 0) {
        p->nflag = 1;
        p->data = my_getnbr((av[1 + 1]));
        p->base = my_getnbr((av[3 + 1]));
        p->imax = my_getnbr((av[5 + 1]));
        npalindrome(p);
    } else if (p->pflag == 1 || (p->data < 0 && p->base < 2)
    || (p->base > 10 && p->imax < 0))
        print_invalid();
}
