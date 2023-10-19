/*
** EPITECH PROJECT, 2018
** Lem-in
** File description:
** Lib function prototypes
*/

#ifndef MY_LIB_H_
#define MY_LIB_H_

#include <unistd.h>
#include "get_next_line.h"

int my_array_len(char **);
int is_num(char *);
int my_getnbr(char const *);
char *get_next_line(int);
int my_strcmp(char const *, char const *);
char **my_split(char *, char);

#endif
