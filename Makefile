##
## EPITECH PROJECT, 2021
## makefile
## File description:
## ..
##

SRC	=	sources/my_printf.c\
		lib/my/my_strlen.c\
		lib/my/my_putchar.c\
		lib/my/my_putstr.c\
		tests/tests.c\
		lib/my/my_put_nbr.c\
		lib/my/octal.c\
		lib/my/binary.c\
		lib/my/hexa.c\
		lib/my/smaj.c\
		lib/my/hexamin.c\
		lib/my/my_strlowcase.c\
		flags/flagb.c\
		flags/flagc.c\
		flags/flagd.c\
		flags/flagi.c\
		flags/flago.c\
		flags/flagpourcent.c\
		flags/flags.c\
		flags/flagsmaj.c\
		flags/flagu.c\
		flags/flagx.c\
		flags/flagxmin.c\

NAME	= 	libmy.a

OBJ	= 	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)
	rm -rf $(NAME)

fclean: clean
	rm -rf $(NAME)
	rm -rf ./a.out

re:	fclean $(NAME)

unit_test: fclean all
	gcc $(OBJ) -L. -lmy -lcriterion

run_test: unit_test
	./a.out
