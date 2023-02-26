/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** check_movement
*/

#include "../include/sokoban.h"

void check_box(my_sokoban_t *s, int pos_x, int pos_y)
{
    if (s->map[s->player_x + pos_x][s->player_y + pos_y] == 'X'
        && s->map[s->player_x + pos_x * 2][s->player_y + pos_y * 2] == ' ') {
        s->map[s->player_x][s->player_y] = ' ';
        s->map[s->player_x + pos_x][s->player_y + pos_y] = 'P';
        s->map[s->player_x + pos_x * 2][s->player_y + pos_y * 2] = 'X';
        s->player_y += pos_y;
        s->player_x += pos_x;
        return;
    }
    if (s->map[s->player_x + pos_x][s->player_y + pos_y] == 'X'
        && s->map[s->player_x + pos_x * 2][s->player_y + pos_y * 2] == 'O') {
        s->map[s->player_x][s->player_y] = ' ';
        s->map[s->player_x + pos_x][s->player_y + pos_y] = 'P';
        s->map[s->player_x + pos_x * 2][s->player_y + pos_y * 2] = 'X';
        s->player_y += pos_y;
        s->player_x += pos_x;
        return;
    }
}

void check_empty(my_sokoban_t *s, int pos_x, int pos_y)
{
    if (s->map[s->player_x + pos_x][s->player_y + pos_y] == ' ') {
        s->map[s->player_x][s->player_y] = ' ';
        s->map[s->player_x + pos_x][s->player_y + pos_y] = 'P';
        s->player_y += pos_y;
        s->player_x += pos_x;
        return;
    }
    if (s->map[s->player_x + pos_x][s->player_y + pos_y] == 'O') {
        s->map[s->player_x][s->player_y] = ' ';
        s->map[s->player_x + pos_x][s->player_y + pos_y] = 'P';
        s->player_y += pos_y;
        s->player_x += pos_x;
        return;
    }
}
