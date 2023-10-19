/*
** EPITECH PROJECT, 2018
** my_split_from_dots.c
** File description:
** split
*/

#include <stdlib.h>
#include "my_lib.h"

int count_word_s(char *str, char sepa)
{
	int space = 0;
	int i = 0;

	if (str[i] != sepa && str[i] != '\0')
		space++;
	while (str[i] != '\0') {
		while (str[i] == sepa) {
			i++;
			if (str[i] != sepa && str[i] != '\0')
				space++;
		}
		i++;
	}
	return (space);
}

int len_s(char *str, int i, char sepa)
{
	int a = 0;

	while (str[i] != sepa && str[i] != '\0') {
		a++;
		i++;
	}
	return (a);
}

char **my_split(char *av, char sepa)
{
	char **str = malloc(sizeof(char *) * count_word_s(av, sepa) + 1);
	int a = 0;
	int i = 0;
	int n = 0;

	while (a != count_word_s(av, sepa)) {
		for (; av[n] == sepa; n++);
		if (av[n] == '\0' || a == count_word_s(av, sepa)) {
			str[a + 1] = NULL;
			return (str);
		}
		str[a] = malloc(sizeof(char) * (len_s(av, n, sepa) + 1));
		while (av[n] != sepa && av[n] != '\0')
			str[a][i++] = av[n++];
		str[a++][i] = '\0';
		n++;
		i = 0;
	}
	str[a] = NULL;
	return (str);
}
