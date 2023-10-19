/*
** EPITECH PROJECT, 2017
** putchar
** File description:
** arnaud
*/

#include <unistd.h>
#include "../../include/my_printf.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}
