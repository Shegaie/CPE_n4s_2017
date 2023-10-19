/*
** EPITECH PROJECT, 2017
** printf
** File description:
** arnaud
*/

#include <stdarg.h>
#include "../../include/my_printf.h"

int my_print_pointer(va_list va)
{
	void *something = va_arg(va, void *);

	my_putstr("0x");
	my_put_hexa((unsigned long int)something);
	return (0);
}
