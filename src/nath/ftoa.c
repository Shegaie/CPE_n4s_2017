/*
** EPITECH PROJECT, 2018
** n4s
** File description:
** ftoa
*/

#include "stdlib.h"

char *ftoa(float nb)
{
	char *str = malloc(sizeof(char) * 4);
	int nb_final = 0;

	nb = nb * 10;
	nb_final = (int)nb;
	if (nb >= 0) {
		str[0] = '0';
		str[1] = '.';
		str[2] = nb_final + 48;
		str[3] = '\0';
	} else {
		str[0] = '-';
		str[1] = '0';
		str[2] = '.';
		str[3] = -nb_final + 48;
		str[4] = '\0';
	}
}