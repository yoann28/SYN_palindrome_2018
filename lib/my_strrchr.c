/*
** EPITECH PROJECT, 2019
** str
** File description:
** rchr
*/

#include "../include/palindrome.h"

char *my_strrchr(const char *s, int c)
{
    size_t i = 0;
    char chr = c;
    char *ptr = NULL;

    if (chr == '\0')
        return ((char *)s + my_strlen(s));
    while (s[i] != '\0') {
        if (s[i] == c)
            ptr = (char *)s + i;
        i++;
    } return (ptr);
}
