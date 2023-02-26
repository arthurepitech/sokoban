/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** sokoban
*/

#include "../include/sokoban.h"

WINDOW *create_newwin(int height, int width, int starty, int startx)
{
    WINDOW *local_win;

    local_win = newwin(height, width, starty, startx);
    wrefresh(local_win);
    return local_win;
}
