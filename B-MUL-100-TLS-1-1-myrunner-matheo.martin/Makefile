##
## EPITECH PROJECT, 2022
## B-MUL-100-TLS-1-1-myrunner-matheo.martin
## File description:
## Makefile
##

SRC = $(wildcard SRC/*.c)

OBJ = $(SRC:.c=.o)

NAME = my_runner

CFLAGS = -Iinclude

LDFLAGS = -Llib/my -lmy -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

all: $(OBJ)
	make -C ./lib/my
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	make fclean -C ./lib/my
	rm -f lib/libmy.a
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re