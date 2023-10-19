/*
** EPITECH PROJECT, 2018
** Need 4 Stek
** File description:
** Main
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_lib.h"
#include "my_printf.h"
#include "instructions.h"
#define FC atof(info[3])
#define LC atof(info[34])
#define MC atof(info[15])

void speed_average(int i)
{
	my_printf("CAR_FORWARD:0.%d\n", i);
}

int array_len(char **array)
{
	int i = 0;

	for (; array[i] != NULL; i++);
	return (i);
}

int check_right(char **info)
{
	if (my_array_len(info) >= 34) {
		for (int i = 23; i < 34; i++) {
			if (my_getnbr(info[i]) > 1000)
				return (1);
		}
	}
	return (0);
}

int check_left(char **info)
{
	if (my_array_len(info) >= 34) {
		for (int i = 3; i < 9; i++) {
			if (my_getnbr(info[i]) > 1000)
				return (1);
		}
	}
	return (0);
}

int dead_end(char **info)
{
	if (check_right(info) == 0 && check_left(info) == 0) {
		if (my_array_len(info) >= 30 && my_getnbr(info[16]) < 900) {
			speed_min();
			stop();
			return (0);
		}
	}
	return (1);
}

int turn_right(char **info)
{
	if (my_array_len(info) >= 34 &&
	my_getnbr(info[3]) < my_getnbr(info[34])) {
		write(2, "go right\n", 9);
		speed_average(2);
		go_right(2);
//		str = get_info();
//		info = my_split(str, ':');
		return (0);
	}
	return (1);
}

int turn_left(char **info)
{
	if (my_array_len(info) >= 34 &&
	my_getnbr(info[3]) > my_getnbr(info[34])) {
		write(2, "go left\n", 8);
		speed_average(2);
		go_left(2);
//		str = get_info();
//		info = my_split(str, ':');
		return (0);
	}
	return (1);
}

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
	return (str);
}

int main()
{
	char *str = NULL;
	char **info;
	size_t len;	
	char *dir = malloc(sizeof("WHEELS_DIR:0.???"));
	char *speed = malloc(sizeof("CAR_FORWARD:0.???"));
	float wheel_rot = 0.0;
	float var_speed = 0.4;
	float force = 0.0;

	start();
	getline(&str, &len, stdin);
	get_info(&str);
	info = my_split(str, ':');
	while (1) {
		if (info[34]) {
			force = 100/MC;
			if (FC < LC)
				wheel_rot = -force;
			else if (LC < FC)
				wheel_rot = force;
			if (MC < 20)
				for (int i = 0; i < 5; i++) {
					sprintf(dir, "WHEELS_DIR:%.2f\n", -wheel_rot);
					write(1, dir, strlen(dir));
					write(1, "CAR_BACKWARDS:0.4\n", 18);
					getline(&str, &len, stdin);
				}
		 	sprintf(speed, "CAR_FORWARD:%.2f\n", var_speed);
			sprintf(dir, "WHEELS_DIR:%.2f\n", wheel_rot);
			write(1, dir, strlen(dir));
			getline(&str, &len, stdin);
			write(1, speed, strlen(speed));
			getline(&str, &len, stdin);
		}
		get_info(&str);
		info = my_split(str, ':');
	}
	usleep(100000);
	stop();
	write(2, "check end\n", 10);
	return (0);
}
