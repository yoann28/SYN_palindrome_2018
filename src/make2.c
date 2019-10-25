/*
** EPITECH PROJECT, 2019
** make
** File description:
** make
*/

#include "../include/palindrome.h"

void init_data(data_t *p)
{
    p->nflag = 0;
    p->pflag = 0;
    p->data = 0;
    p->base = 10;
    p->imin = 0;
    p->imax = 100;
    p->temp = 0;
}

void print_invalid(void)
{
    write(2, "invalid argument\n", 17);
}

int is_this_a_palindrome(data_t *p)
{
    char *number = malloc(sizeof(char) * 100);
    char *revnumber;
    int value;
    base_conversion(number, p->data, p->base);
    revnumber = revstr(my_strdup(number));
    value = my_strcmp(number, revnumber);
    free(revnumber);
    free(number);
    return (value);
}

void test7(int ac, char **av, data_t *p)
{
    if (my_strcmp(av[1], "-n") == 0 && my_strcmp(av[3], "-b") == 0) {
        p->nflag = 1;
        p->data = my_getnbr((av[1 + 1]));
        p->base = my_getnbr((av[3 + 1]));
        npalindrome(p);
    } else if (p->pflag == 1 || ((p->data < 0) && ((p->base < 2)
    && (p->base > 10))))
        print_invalid();
}
