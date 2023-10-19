/*
** EPITECH PROJECT, 2018
** Lem-in
** File description:
** Is num
*/

int is_num(char *str)
{
	if (str[0] == '\0')
		return (1);
	for (int i = 0; str[i] != '\0'; i++) {
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
	}
	return (0);
}
