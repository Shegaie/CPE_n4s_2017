/*
** EPITECH PROJECT, 2018
** N4S
** File description:
** Count the length of an array
*/

#include <stdlib.h>

int my_array_len(char **array)
{
	int i = 0;

	for (; array[i] != NULL; i++);
	return (i);
}
