/*
** EPITECH PROJECT, 2019
** palindrom
** File description:
** plaindrome
*/

#ifndef PALINDROME_H_
#define PALINDROME_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct data_s {
    int nflag;
    int pflag;
    int data;
    int base;
    int imin;
    int imax;
    int temp;
} data_t;

void opt(int ac, char *const *av, data_t *p);
void toto(data_t *p);
void usage(char *av);
void usage1(void);
void npalindrome(data_t *p);
unsigned long long basic(unsigned long long nbr, int base);
void error_checker(char **av);
int decimal(char *nbr, int base);
void display_nothing(char *old, char *new);
int ppalindrome(data_t *p, int i);
void palindromic(data_t *p);
void base_conversion(char *string, int nbr, int base);
void init_data(data_t *p);
void print_invalid(void);
void test(int ac, char **av, data_t *p);
void test1(int ac, char **av, data_t *p);
void test2(int ac, char **av, data_t *p);
void test3(int ac, char **av, data_t *p);
void test4(int ac, char **av, data_t *p);
void test5(int ac, char **av, data_t *p);
void test6(int ac, char **av, data_t *p);
void test7(int ac, char **av, data_t *p);
void test8(int ac, char **av, data_t *p);
void test9(int ac, char **av, data_t *p);
void test10(int ac, char **av, data_t *p);
void test11(int ac, char **av, data_t *p);
void test12(int ac, char **av, data_t *p);
int is_this_a_palindrome(data_t *p);
unsigned long long basic(unsigned long long nbr, int base);
int decimal(char *nbr, int base);
void base_conversion(char *string, int nbr, int base);
void display_end(char *old, char *new, int count, data_t *p);

void my_putchar(char c);
void my_putstr(char *str);
void my_putnbr(int nbr);
int my_strlen(char const *str);
int tool(char c);
int is_alphanum(char c);
int my_getnbr(char *str);
int my_strcmp(char *str, char *str2);
char *revstr(char *str);
char *my_strdup(char *src);

#endif
