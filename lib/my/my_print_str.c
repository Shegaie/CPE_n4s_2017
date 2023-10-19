/*
** EPITECH PROJECT, 2017
** printf
** File description:
** arnaud
*/

#include <unistd.h>
#include <stdarg.h>
#include "../../include/my_printf.h"

int my_print_str(va_list va)
{
	char const *str = va_arg(va, char *);
	write(1, str, my_strlen(str));
	return (0);
}
