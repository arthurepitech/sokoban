/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

typedef struct my_word_t {
    int len;
    int nb_words;
} my_word_t;

typedef struct my_str_to_word_array_s {
    my_word_t word[100000];
    char **array;
    int i;
    int x;
    int y;
} my_str_to_word_array_t;

void my_putchar(char c);

char *my_strstr(char *str, char const *to_find);
int check_cmp(char *str, char const *to_find, int i);

int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char *str);
int my_strlen_const(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);

void my_sort_int_array(int *tab, int size);
void sort_all(int y, int *array, int size, int tmp);

int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_alphanum(char const str);
int my_show_word_array(char **tab);
char *my_strdup(char const *src);
char *concat_params(int ac, char **av);

char **my_str_to_word_array(char *str, char delim);
char **my_str_to_word_array_alloc(char *str, char delim, int x);

int my_put_nbr_base(int nbr, char const *base);
int my_str_isnalpha(char const *str, int n);

int my_intlen(int nb);
char *my_int_to_array(int nbr);

void my_put_str_blue(char *str);
void my_put_str_red(char *str);
void my_put_str_green(char *str);
void my_put_str_yellow(char *str);
void my_put_str_purple(char *str);

void my_put_char_blue(char c);
void my_put_char_red(char c);
void my_put_char_green(char c);
void my_put_char_yellow(char c);
void my_put_char_purple(char c);

#endif /* !MY_H_ */
