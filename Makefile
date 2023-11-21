##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile setting_up
##

NAME := setting_up

SRC :=mini_printf.c\
	my_putstr.c\
	my_putchar.c\
	my_put_nbr.c\
	setting_up.c\
	setting_up2.c\
	main.c\

OBJ := $(SRC:.c=.o)

CFLAGS := -Wall -Wextra

all: $(NAME)

clean :
	find . -type f -name '*~' -delete
	find . -type f -name '#*#' -delete
	find . -type f -name '*.o' -delete

fclean : clean
	rm  -f $(NAME)
	rm -f a.out

re : fclean all

$(NAME) : $(OBJ)
	gcc -o $(NAME) $(OBJ)

.PHONY : all re fclean clean
