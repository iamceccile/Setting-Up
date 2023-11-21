/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** my_mini_printf
*/

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "my.h"

int switch_args(char format, va_list args)
{
    char characters;
    char *str;
    int i = 0;
    int decimal;

    switch (format) {
    case 'i':
    case 'd':
        decimal = va_arg(args, int);
        my_put_nbr(decimal);
        break;
    case 's':
        str = va_arg(args, char *);
        my_putstr(str);
        break;
    case 'c':
        characters = va_arg(args, int);
        my_putchar(characters);
        break;
    }
}

int mini_printf(const char *format, ...)
{
    va_list args;
    int i = 0;
    char c;

    va_start(args, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            switch_args(format[i + 1], args);
            i += 2;
        } else {
            c = format[i];
            my_putchar(c);
            i++;
        }
    }
    va_end(args);
    return 0;
}
