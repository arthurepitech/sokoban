/*
** EPITECH PROJECT, 2022
** Sokoban
** File description:
** load_file_in_mem
*/

#include "../include/sokoban.h"

char *load_file_in_mem(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return NULL;
    char *buffer = malloc(sizeof(char) * 100000000);
    int size = read(fd, buffer, 100000000);
    if (size == -1)
        return NULL;
    buffer[size] = '\0';
    close(fd);
    return buffer;
}
