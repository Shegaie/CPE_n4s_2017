/*
** EPITECH PROJECT, 2018
** Need 4 Stek
** File description:
** Directions of the car
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my_printf.h"

void go_left(int i)
{
	my_printf("WHEELS_DIR:0.%d\n", i);
}

void go_right(int i)
{
	printf("WHEELS_DIR:-0.%d\n", i);
}

void go_choose(float i)
{
	my_printf("WHEELS_DIR:%f\n", i);
}

void go_straight(void)
{
	write(1, "WHEELS_DIR:0\n", 13);
}
