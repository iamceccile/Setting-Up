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

int main(int argc, char *argv[])
{
    fs_open_file(argv[1]);
    fs_cat_500_bytes(argv[1]);
    check_file(argv[1]);
}
