/*
** EPITECH PROJECT, 2017
** printf
** File description:
** arnaud
*/

#include <stdarg.h>
#include "../../include/my_printf.h"

int my_put_hexa(unsigned long int nb)
{
	unsigned int i;

	if (nb >= 16) {
		i = nb % 16;
		nb = nb / 16;
		my_put_hexa(nb);
		my_puthexa(i);
	} else
		my_puthexa(nb);
	return (0);
}

int my_puthexa(int h)
{
	if (h > 16)
		return (84);
	if (h < 10)
		my_putchar(48 + h);
	else
		my_putchar(97 + (h - 10));
	return (0);
}

int my_print_hexa(va_list va)
{
	unsigned int i;
	unsigned long int nb = va_arg(va, unsigned int);

	if (nb >= 16) {
		i = nb % 16;
		nb = nb / 16;
		my_put_hexa(nb);
		my_puthexa(i);
	} else
		my_puthexa(nb);
	return (0);
}
