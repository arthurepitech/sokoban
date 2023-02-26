/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** start_game
*/

#include "../include/sokoban.h"

void start_game(my_sokoban_t *s)
{
    while (s->status == PLAY) {
        get_intput(s);
        update_map(s);
        display_map(s);
        check_end_game(s);
    }
    if (s->status == WIN)
        display_win(s);
    if (s->status == LOOSE)
        display_loose(s);
}
