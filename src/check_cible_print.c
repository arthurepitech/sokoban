/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** check_cible_print
*/

#include "../include/sokoban.h"

void check_if_need_cible(my_sokoban_t *s, int x, int y)
{
    if (s->map_save[x][y] == 'O' && (s->map[x][y] != 'X'
        && s->map[x][y] != 'P' && s->map[x][y] != 'O')) {
        s->map[x][y] = 'O';
    }
}

void check_cible_print(my_sokoban_t *s)
{
    for (int x = 0; s->map[x] != NULL; x++) {
        for (int y = 0; s->map[x][y] != '\0'; y++) {
            check_if_need_cible(s, x, y);
        }
    }
}
