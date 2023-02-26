/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** check_end_game
*/

#include "../include/sokoban.h"

void check_loose_game(my_sokoban_t *s, int x, int y)
{
    int count = 0;
    if (s->map[x][y] == 'X') {
        if (s->map[x][y + 1] == '#')
            count++;
        if (s->map[x][y - 1] == '#')
            count++;
        if (s->map[x + 1][y] == '#')
            count++;
        if (s->map[x - 1][y] == '#')
            count++;
        if (count >= 3 && s->map_save[x][y] != 'O')
            s->status = LOOSE;
    }
}

void check_win_game(my_sokoban_t *s, int x, int y)
{
    if (s->map[x][y] == 'X' && s->map_save[x][y] == 'O')
        s->win++;
}

void check_end_game(my_sokoban_t *s)
{
    s->win = 0;
    for (int x = 0; s->map[x] != NULL; x++) {
        for (int y = 0; s->map[x][y] != '\0'; y++) {
            check_loose_game(s, x, y);
            check_win_game(s, x, y);
        }
    }
    if (s->win == s->nb_o)
        s->status = WIN;
}
