##
## EPITECH PROJECT, 2022
## My_Runner
## File description:
## Makefile
##

SRC     =	my_putchar.c  			\
		my_strlen.c					\
		my_put_nbr.c				\
		my_strncpy.c				\
		my_putstr.c					\
		my_swap.c					\
		my_revstr.c					\
		my_isneg.c					\
		my_strcpy.c					\
		my_getnbr.c					\
		my_itoa.c

OBJ       =	$(SRC:.c=.o)

NAME      =    	libmy.a

all:	$(NAME)

$(NAME):       	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:     clean all

.PHONY: all clean fclean re