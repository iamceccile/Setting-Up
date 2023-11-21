/*
** EPITECH PROJECT, 2023
** test
** File description:
** test
*/

#include <stdio.h>
int main(int argc, char *argv[ ])
{
    fs_open_file(argv[1]);
    fs_cat_500_bytes(argv[1]);
    fs_print_first_line(argv[1]);
    char arr [] = "hello, world";
    array_1d_print_chars(arr);
}
