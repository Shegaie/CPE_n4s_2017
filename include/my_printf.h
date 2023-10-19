/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** arnaud
*/

#include <stdarg.h>

#ifndef MY_H
#define MY_H

int my_strlen(char const*);
void my_putchar(char);
int my_print_char(va_list);
int my_putstr(char const*);
int my_print_str(va_list);
int my_put_nbr(int);
int my_print_nbr(va_list);
int my_put_uint(unsigned int);
int my_print_uint(va_list);
int my_put_octal(unsigned int);
int my_print_octal(va_list);
int my_put_binary(unsigned int);
int my_print_binary(va_list);
int my_put_hexa_uint(unsigned long int);
int my_print_hexa(va_list);
int my_put_hexa(unsigned long int);
int my_puthexa(int);
int my_put_hexa_cap(unsigned int);
int my_puthexa_cap(int);
int my_print_hexa_cap(va_list);
int my_print_pointer(va_list);
int my_isprintable(char);
int my_print_s_cap(va_list);
int print_fonc(char*, int, va_list);
int my_printf(char*, ...);

#endif
