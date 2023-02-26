/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** display_map
*/

#include "../include/sokoban.h"

int print_box(my_sokoban_t *s, int x, int y)
{
    if (s->map[x][y] == 'X') {
        mvwprintw(s->my_win, x, y, "X");
        return 1;
    }
    return 0;
}

int print_player(my_sokoban_t *s, int x, int y)
{
    if (s->map[x][y] == 'P') {
        mvwprintw(s->my_win, x, y, "P");
        return 1;
    }
    return 0;
}

int print_storage(my_sokoban_t *s, int x, int y)
{
    if (s->map[x][y] == 'O') {
        mvwprintw(s->my_win, x, y, "O");
        return (1);
    }
    return 0;
}

void print_char(my_sokoban_t *s, int x, int y)
{
    if (print_box(s, x, y) == 0 && print_player(s, x, y) == 0
        && print_storage(s, x, y) == 0) {
        mvwprintw(s->my_win, x, y, "%c", s->map[x][y]);
    }
}

void display_map(my_sokoban_t *s)
{
    wrefresh(s->my_win);
    for (int x = 0; s->map[x] != NULL; x++) {
        for (int y = 0; s->map[x][y] != '\0'; y++) {
            print_char(s, x, y);
        }
    }
}
