/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** init_structure
*/

#include "../include/sokoban.h"

void init_structure(my_sokoban_t *info)
{
    info->my_win = NULL;
    info->direction = NONE;
    info->map = NULL;
    info->map_save = NULL;
    info->player_x = 0;
    info->player_y = 0;
    info->tmp_o = 0;
    info->nb_o = 0;
    info->nb_x = 0;
    info->nb_p = 0;
    info->map_size_x = 0;
    info->map_size_y = 0;
    info->win = 0;
    info->status = PLAY;
}
