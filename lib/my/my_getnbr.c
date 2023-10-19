/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** atoi like
*/

int my_getnbr(char const *str)
{
	int i = 0;
	int result = 0;
	int first;

	while (str[i] < '0' || str[i] > '9')
		i++;
	first = i;
	while (str[i] <= '9' && str[i] >= '0') {
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (first > 0 && str[first - 1] == '-')
		return (-result);
	return (result);
}
