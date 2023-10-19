/*
** EPITECH PROJECT, 2017
** printf
** File description:
** arnaud
*/

#include <stdarg.h>
#include "../../include/my_printf.h"

int my_isprintable(char c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}

int my_print_s_cap(va_list va)
{
	int i = 0;
	char *str = va_arg(va, char *);

	while (str[i] != '\0') {
		if (my_isprintable(str[i]) == 1)
			my_putchar(str[i]);
		else {
			my_putchar('\\');
			if (str[i] < 8)
				my_putstr("00");
			if (str[i] >= 8 && str[i] <= 31)
				my_putstr("0");
			my_put_octal(str[i]);
		}
		i++;
	}
	return (0);
}
