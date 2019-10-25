/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "../include/palindrome.h"

int main(int ac, char **av)
{
    data_t p;
    if (ac == 2) {
        if (my_strcmp(av[1], "-h") == 0) {
            usage(av[0]);
            return (0);
        } else
            print_invalid();
        exit (84);
    } if (ac < 2) {
        print_invalid();
        exit (84);
    } if (ac == 4) {
        print_invalid();
        exit (84);
    } if (ac > 7) {
        print_invalid();
        exit (84);
    } init_data(&p);
    test1(ac, av, &p);
    return (0);
}
