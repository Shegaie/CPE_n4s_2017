/*
** EPITECH PROJECT, 2017
** printf
** File description:
** arnaud
*/

#include <stdarg.h>
#include "../../include/my_printf.h"

int my_put_nbr(int nb)
{
	int i;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 10) {
		i = nb % 10;
		nb = (nb - i) / 10;
		my_put_nbr(nb);
		my_putchar(48 + i);
	} else
		my_putchar(48 + nb);
	return (0);
}

int my_print_nbr(va_list va)
{
	int i;
	int nb = va_arg(va, int);

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 10) {
		i = nb % 10;
		nb = (nb - i) / 10;
		my_put_nbr(nb);
		my_putchar(48 + i);
	} else
		my_putchar(48 + nb);
	return (0);
}
