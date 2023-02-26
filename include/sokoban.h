/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** sokoban
*/

#ifndef SOKOBAN_H_
    #define SOKOBAN_H_
    #include "../include/my.h"
    #include <curses.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <fcntl.h>
    #define MENU 0
    #define PLAY 1
    #define WIN 99
    #define LOOSE 3
    #define EXIT 10
    #define X s->player_x
    #define Y s->player_y

typedef enum direction {
    NONE,
    UP,
    DOWN,
    LEFT,
    RIGHT
} direction;

typedef struct my_sokoban_s {
    WINDOW *my_win;
    direction direction;
    int status;
    char **map;
    char **map_save;
    int map_size_x;
    int map_size_y;
    int player_x;
    int player_y;
    int tmp_o;
    int nb_o;
    int nb_x;
    int nb_p;
    int win;
} my_sokoban_t;

void display_help(void);

int my_sokoban(my_sokoban_t *s, char *filepath);

void init_structure(my_sokoban_t *info);
void check_map_validity(my_sokoban_t *s, char *filepath);
char *load_file_in_mem(char const *filepath);
void get_map_info(my_sokoban_t *s);

WINDOW *create_newwin(int height, int width, int starty, int startx);
void start_game(my_sokoban_t *info);
void get_intput(my_sokoban_t *s);
void update_map(my_sokoban_t *s);
void display_map(my_sokoban_t *s);

void check_box(my_sokoban_t *s, int pos_x, int pos_y);
void check_empty(my_sokoban_t *s, int pos_x, int pos_y);
void check_cible_print(my_sokoban_t *s);
void check_end_game(my_sokoban_t *s);

void display_win(my_sokoban_t *s);
void display_loose(my_sokoban_t *s);

#endif /* !SOKOBAN_H_ */
