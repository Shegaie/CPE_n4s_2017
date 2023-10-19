/*
** EPITECH PROJECT, 2017
** File Name : my_put_nbr.c
** File description:
** Day03 // Nathalie Hugot
*/

#include "../../include/printf.h"
#include <stdarg.h>

int my_put_nbr(int nb)
{
	int res = 0;
	int mod = 0;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 0) {
		if (nb >= 10) {
			mod = nb % 10;
			res = (nb - mod) / 10;
			my_put_nbr(res);
			my_putchar(mod + '0');
		} else
			my_putchar(nb % 10 + '0');
	}
	return (0);
}

int my_print_nbr(va_list params)
{
	int nb = va_arg(params, int);
	int res = 0;
	int mod = 0;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 0) {
		if (nb >= 10) {
			mod = nb % 10;
			res = (nb - mod) / 10;
			my_put_nbr(res);
			my_putchar(mod + '0');
		} else
			my_putchar(nb % 10 + '0');
	}
	return (0);
}
