##
## EPITECH PROJECT, 2018
## N4S
## File description:
## Makefile
##

SRC	=	src/nath/ai.c		\
		src/nath/directions.c	\
		src/nath/instructions.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra --pedantic -Iinclude/

NAME	=	ai

all:		$(NAME)

$(NAME):	$(OBJ)
		make re -C lib/my/
		gcc -o $(NAME) $(OBJ) $(CFLAGS) -Llib/my -lmy

clean:
		make clean -C lib/my/
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		make fclean -C lib/my/

re:		fclean all

debug:		CFLAGS += -g
debug:		re
