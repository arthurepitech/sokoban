/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** update_map
*/

#include "../include/sokoban.h"

void update_map(my_sokoban_t *s)
{
    if (s->direction == UP) {
        check_box(s, -1, 0);
        check_empty(s, -1, 0);
    }
    if (s->direction == DOWN) {
        check_box(s, 1, 0);
        check_empty(s, 1, 0);
    }
    if (s->direction == LEFT) {
        check_box(s, 0, -1);
        check_empty(s, 0, -1);
    }
    if (s->direction == RIGHT) {
        check_box(s, 0, 1);
        check_empty(s, 0, 1);
    }
    check_cible_print(s);
}
