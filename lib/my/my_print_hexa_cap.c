/*
** EPITECH PROJECT, 2017
** printf
** File description:
** arnaud
*/

#include <stdarg.h>
#include "../../include/my_printf.h"

int my_print_hexa_cap(va_list va)
{
	unsigned int i;
	unsigned int nb = va_arg(va, unsigned int);

	if (nb >= 16) {
		i = nb % 16;
		nb = nb / 16;
		my_put_hexa_cap(nb);
		my_puthexa_cap(i);
	} else
		my_puthexa_cap(nb);
	return (0);
}

int my_put_hexa_cap(unsigned int nb)
{
	unsigned int i;

	if (nb >= 16) {
		i = nb % 16;
		nb = nb / 16;
		my_put_hexa_cap(nb);
		my_puthexa_cap(i);
	} else
		my_puthexa_cap(nb);
	return (0);
}

int my_puthexa_cap(int h)
{
	if (h > 16)
		return (84);
	if (h < 10)
		my_putchar(48 + h);
	else
		my_putchar(65 + (h - 10));
	return (0);
}
