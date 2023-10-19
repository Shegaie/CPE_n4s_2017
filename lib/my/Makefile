##
## EPITECH PROJECT, 2017
## N4S
## File description:
## Makefile
##

SRC	=	my_strlen.c		\
		my_array_len.c		\
		my_putchar.c		\
		my_print_char.c		\
		my_print_nbr.c		\
		my_putstr.c		\
		my_print_str.c		\
		my_print_uint.c		\
		my_print_octal.c	\
		my_print_binary.c	\
		my_print_hexa.c		\
		my_print_hexa_cap.c	\
		my_print_s_cap.c	\
		my_print_pointer.c	\
		my_printf.c		\
		get_next_line.c		\
		my_getnbr.c		\
		is_num.c		\
		my_split.c		\
		my_strcmp.c

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra --pedantic -I ../../include

all: 		$(NAME)

$(NAME):	$(OBJ)
		gcc -c $(CFLAGS) $(SRC)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
