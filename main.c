/*
** EPITECH PROJECT, 2023
** test
** File description:
** test
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "my.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char *argv[ ])
{
    if (argv[1] == NULL || open(argv[1], O_RDONLY) == -1) {
    mini_printf("please add arg\n");
    } else {
    fs_open_file(argv[1]);
    fs_cat_500_bytes(argv[1]);
    fs_print_first_line(argv[1]);
    char arr [] = "hello, world";
    array_1d_print_chars(arr);
     }
}
