/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** get_intput
*/

#include "../include/sokoban.h"

void get_intput(my_sokoban_t *s)
{
    int ch = wgetch(s->my_win);
    switch (ch) {
        case KEY_UP:
            s->direction = UP;
            break;
        case KEY_DOWN:
            s->direction = DOWN;
            break;
        case KEY_LEFT:
            s->direction = LEFT;
            break;
        case KEY_RIGHT:
            s->direction = RIGHT;
            break;
        case 'q':
            s->status = EXIT;
            break;
        default:
            s->direction = NONE;
    }
}
