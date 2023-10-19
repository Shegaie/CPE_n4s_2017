/*
** EPITECH PROJECT, 2017
** printf
** File description:
** arnaud
*/

#include <stdarg.h>
#include "../../include/my_printf.h"

int my_print_binary(va_list va)
{
	unsigned int i;
	unsigned int nb = va_arg(va, unsigned int);

	if (nb >= 2) {
		i = nb % 2;
		nb = (nb - i) / 2;
		my_put_binary(nb);
		my_putchar(48 + i);
	} else
		my_putchar(48 + nb);
	return (0);
}

int my_put_binary(unsigned int nb)
{
	unsigned int i;

	if (nb >= 2) {
		i = nb % 2;
		nb = (nb - i) / 2;
		my_put_binary(nb);
		my_putchar(48 + i);
	} else
		my_putchar(48 + nb);
	return (0);
}
