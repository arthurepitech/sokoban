/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** display_help
*/

#include "../include/sokoban.h"

void display_help(void)
{
    my_putstr("USAGE:\n");
    my_putstr("\t./my_sokoban map\n");
    my_putstr("DESCRIPTION:\n");
    my_putstr("\tmap file representing the warehouse map,");
    my_putstr("containing '#' for walls,\n");
    my_putstr("\t'P' for the player, 'X' for boxes and 'O'");
    my_putstr(" for storage locations.\n");
}
