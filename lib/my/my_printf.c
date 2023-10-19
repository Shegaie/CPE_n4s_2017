/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** arnaud
*/

#include <stdarg.h>
#include "../include/my_printf.h"

int tab_flag(char c)
{
	int i = 0;
	char flag[12] = "cidsSuboxXp";

	while (c != flag[i] && flag[i] != '\0')
		i++;
	return (i);
}

int print_fonc(char *str, int i, va_list va)
{
	int (*ptr[11]) (va_list) = {
	my_print_char, my_print_nbr, my_print_nbr, my_print_str,
		    my_print_s_cap, my_print_uint, my_print_binary,
		    my_print_octal, my_print_hexa, my_print_hexa_cap,
		    my_print_pointer};
	if (str[i] == '%')
		my_putchar('%');
	if (tab_flag(str[i]) < 11)
		ptr[tab_flag(str[i])] (va);
	return (0);
}

int my_printf(char *str, ...)
{
	int i = 0;
	va_list va;

	va_start(va, str);
	while (str[i] != '\0') {
		if (str[i] != '%')
			my_putchar(str[i]);
		if (str[i] == '%' && str[i + 1] != '\0') {
			i++;
			print_fonc(str, i, va);
		}
		i++;
	}
	va_end(va);
	return (0);
}
