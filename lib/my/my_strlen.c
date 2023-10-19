/*
** EPITECH PROJECT, 2018
** strlen
** File description:
** lib
*/

int my_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
