/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** Day04
*/

int my_strlen(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
        count++;
    return count;
}

int my_strlen_const(char const *str)
{
    int count = 0;
    for (; str[count] != '\0'; count++);
    return count;
}
