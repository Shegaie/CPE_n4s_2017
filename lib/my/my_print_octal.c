/*
** EPITECH PROJECT, 2017
** printf
** File description:
** arnaud
*/

#include <stdarg.h>
#include "../../include/my_printf.h"

int my_print_octal(va_list va)
{
	unsigned int i;
	unsigned int nb = va_arg(va, unsigned int);

	if (nb >= 8) {
		i = nb % 8;
		nb = (nb - i) / 8;
		my_put_octal(nb);
		my_putchar(48 + i);
	} else
		my_putchar(48 + nb);
	return (0);
}

int my_put_octal(unsigned int nb)
{
	unsigned int i;

	if (nb >= 8) {
		i = nb % 8;
		nb = (nb - i) / 8;
		my_put_octal(nb);
		my_putchar(48 + i);
	} else
		my_putchar(48 + nb);
	return (0);
}
