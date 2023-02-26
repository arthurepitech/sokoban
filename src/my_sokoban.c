/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** sokoban
*/

#include "../include/sokoban.h"

int my_sokoban(my_sokoban_t *s, char *filepath)
{
    init_structure(s);
    check_map_validity(s, filepath);
    initscr();
    curs_set(false);
    refresh();
    s->my_win = create_newwin(s->map_size_x, s->map_size_y
        , (LINES - s->map_size_x) / 2, (COLS - s->map_size_y) / 2);
    keypad(s->my_win, true);
    nodelay(s->my_win, true);
    start_game(s);
    wgetch(s->my_win);
    endwin();
    return 0;
}
