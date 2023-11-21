/*
** EPITECH PROJECT, 2023
** put_nbr
** File description:
** my_put_nbr
*/

#include "my.h"

void my_maximum(void)
{
    my_putchar('2');
    my_putchar('1');
    my_putchar('4');
    my_putchar('7');
    my_putchar('4');
    my_putchar('8');
    my_putchar('3');
    my_putchar('6');
    my_putchar('4');
    my_putchar('8');
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0 && nb <= 9) {
        my_putchar(nb % 10 + 48);
    }
    if (nb == -2147483648) {
        my_maximum();
    } else if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    return 0;
}
