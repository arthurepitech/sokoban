/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** my_str_to_word_array_alloc
*/

#include "../../include/my.h"
#include <stddef.h>
#include <stdlib.h>

char **my_str_to_word_array_alloc(char *str, char delim, int x)
{
    char **array = malloc(sizeof(char *) * x);
    int y = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != delim) {
            array[x][y] = str[i];
            y++;
        } else {
            array[x][y] = '\0';
            x++;
            y = 0;
        }
    }
    array[x][y] = '\0';
    array[x + 1] = NULL;
    return array;
}
