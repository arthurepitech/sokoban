/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** display_win
*/

#include "../include/sokoban.h"

void display_win(my_sokoban_t *s)
{
    endwin();
    free(s);
    exit(0);
}
