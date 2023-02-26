/*
** EPITECH PROJECT, 2022
** Lib
** File description:
** my_str_to_word_array
*/

#include "../../include/my.h"
#include <stddef.h>
#include <stdlib.h>

void get_size_of_word(my_str_to_word_array_t *stwa, char *str, char delim)
{
    stwa->word[stwa->x].len = 1;
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] != delim) {
            stwa->word[stwa->x].len++;
        } else {
            stwa->x++;
            stwa->word[stwa->x].len = 1;
        }
    }
    stwa->x = 0;
}

void init_stwa(my_str_to_word_array_t *stwa, char *str, char delim)
{
    stwa->array = malloc(sizeof(char *) * (my_strlen(str) + 1));
    stwa->i = 0;
    stwa->x = 0;
    stwa->y = 0;
    get_size_of_word(stwa, str, delim);
    for (; str[stwa->i] != '\0'; stwa->i++) {
        if (str[stwa->i] == delim) {
            stwa->array[stwa->x]
                = malloc(sizeof(char) * stwa->word[stwa->x].len);
            stwa->word[stwa->x].nb_words = stwa->x;
            stwa->x++;
        }
    }
    stwa->array[stwa->x]
                = malloc(sizeof(char) * stwa->word[stwa->x].len);
    stwa->array[stwa->x + 1] = NULL;
}

char **my_str_to_word_array(char *str, char delim)
{
    my_str_to_word_array_t *stwa = malloc(sizeof(my_str_to_word_array_t));
    init_stwa(stwa, str, delim);
    int x = 0;
    int y = 0;
    for (int i = 0; i != stwa->i; i++) {
        if (str[i] != delim) {
            stwa->array[x][y] = str[i];
            y++;
        } else {
            stwa->array[x][y] = '\0';
            x++;
            y = 0;
        }
    }
    stwa->array[x][y] = '\0';
    char **array = stwa->array;
    free(stwa);
    return array;
}
