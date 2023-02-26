/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** main
*/

#include "../include/sokoban.h"

int main(int ac, char **av)
{
    if (ac != 2) {
        return 84;
    }
    if (my_strcmp(av[1], "-h") == 0) {
        display_help();
        return 0;
    }
    my_sokoban_t *s = malloc(sizeof(my_sokoban_t));
    my_sokoban(s, av[1]);
    free(s);
    return 0;
}
