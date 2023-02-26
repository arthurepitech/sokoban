##
## EPITECH PROJECT, 2022
## C Pool
## File description:
## Makefile
##

NAME	=	my_sokoban

SRC		+=	src/main.c						\
			src/display_help.c				\
			src/my_sokoban.c				\
			src/init_structure.c			\
			src/check_map_validity.c		\
			src/load_file_in_mem.c			\
			src/mem_alloc_2d_array.c		\
			src/get_map_info.c				\
			src/create_window.c				\
			src/start_game.c				\
			src/get_intput.c				\
			src/update_map.c				\
			src/check_movement.c			\
			src/check_cible_print.c			\
			src/display_map.c				\
			src/check_end_game.c			\
			src/display_win.c				\
			src/display_loose.c				\

OBJ		+=	$(SRC:.c=.o)

NCURSES	=	-lncurses

all: 	$(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C ./lib/my/
	cc -o $(NAME) $(OBJ) -I./include -lmy -L./lib $(NCURSES)

%.o: %.c
	@@cc -g3 -W -Wall -Wextra -o $@ -c $<

unit_tests: fclean all
	cc tests/*.c -o unit_tests -I./include -L./ -lmy --coverage -lcriterion

run_tests: unit_tests
	./unit_tests

clean:
	@@$(shell find . -name "a.out" -delete)
	@@$(shell find . -name "*.o" -delete)
	@@$(shell find . -name "*~" -delete)
	@@$(shell find . -name "\#*\#" -delete)
	@@$(shell find . -name "vgcore.*" -delete)
	@@$(shell find . -name "*.gc*" -delete)
	@@$(shell find . -name "*.log*" -delete)

fclean: clean
	@@rm -f $(NAME)
	$(MAKE) fclean -C lib/my/

re: fclean all clean
	$(MAKE) re -C lib/my/

.PHONY: all clean fclean re
