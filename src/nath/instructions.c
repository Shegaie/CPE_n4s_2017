/*
** EPITECH PROJECT, 2018
** N4S
** File description:
** Instructions
*/

#include <unistd.h>
#include <stdio.h>
#include "my_lib.h"
#include "my_printf.h"

void start(void)
{
	write(1, "START_SIMULATION\n", 17);
	usleep(10);
}

void stop(void)
{
	write(1, "STOP_SIMULATION\n", 16);
}

void speed_max(void)
{
	write(1, "CAR_FORWARD:1\n", 14);
}

void speed_min(void)
{
	write(1, "CAR_FORWARD:0\n", 14);
}

int get_info(char **str)
{
	size_t len = 0;

	write(1, "GET_INFO_LIDAR\n", 15);
	getline(str, &len, stdin);
	return (0);
}
