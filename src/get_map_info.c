/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** get_map_info
*/

#include "../include/sokoban.h"

void stock_position(my_sokoban_t *s, int x, int y)
{
    if (s->map[x][y] == 'P') {
        s->player_x = x;
        s->player_y = y;
    }
}

void get_map_info(my_sokoban_t *s)
{
    for (int x = 0; s->map[x] != NULL; x++) {
        for (int y = 0; s->map[x][y] != '\0'; y++) {
            stock_position(s, x, y);
        }
    }
}
