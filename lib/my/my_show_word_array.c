/*
** EPITECH PROJECT, 2022
** my_show_word_array.c
** File description:
** Day08
*/

#include "../../include/my.h"
#include <stddef.h>
#include <unistd.h>

int my_show_word_array(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return 0;
}
