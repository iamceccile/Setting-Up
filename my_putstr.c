/*
** EPITECH PROJECT, 2023
** putstr
** File description:
** my_putstr
*/

#include <stdio.h>
#include "my.h"

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return 0;
}
