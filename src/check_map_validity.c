/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** check_map_validity
*/

#include "../include/sokoban.h"

void check_necessary_char(my_sokoban_t *s, char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == 'P')
            s->nb_p++;
        if (buffer[i] == 'O')
            s->nb_o++;
        if (buffer[i] == 'X')
            s->nb_x++;
    }
    if (s->nb_p != 1 || s->nb_o != s->nb_x || s->nb_o == 0 || s->nb_x == 0)
        exit(84);
}

void check_map_validity(my_sokoban_t *s, char *filepath)
{
    char *buffer = load_file_in_mem(filepath);
    if (buffer == NULL)
        exit(84);
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] != ' ' && buffer[i] != 'X' && buffer[i] != 'O'
            && buffer[i] != 'P' && buffer[i] != '#' && buffer[i] != '\n')
            exit(84);
    }
    check_necessary_char(s, buffer);
    s->map = my_str_to_word_array(buffer, '\n');
    s->map_save = my_str_to_word_array(buffer, '\n');
    get_map_info(s);
    free(buffer);
}
