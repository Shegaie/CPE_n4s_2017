/*
** EPITECH PROJECT, 2017
** printf
** File description:
** arnaud
*/

#include <unistd.h>
#include <stdarg.h>

int my_print_char(va_list va)
{
	char c = va_arg(va, int);
	write(1, &c, 1);
	return (1);
}
