/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my_strncpy
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    for (; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}
