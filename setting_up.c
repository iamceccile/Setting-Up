/*
** EPITECH PROJECT, 2023
** setting up
** File description:
** setting_up
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "my.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

int fs_open_file(char const *filepath)
{
    struct stat buf;
    char *buffer = malloc(sizeof(filepath));
    int size = 0;
    int file = 0;

    file = open(filepath, O_RDONLY);
    size = fstat(file, &buf);
    if (file == -1)
        mini_printf("FAILURE\n");
    else
        mini_printf("SUCCESS\n");
    fs_understand_return_of_read(file, buffer, size);
    return 0;
}

int fs_understand_return_of_read(int fd, char *buffer, int size)
{
    int file = read(fd, buffer, size);

    if (file == -1) {
        mini_printf("read failed\n");
    }
    if (file == 0) {
        mini_printf("read has nothing more to read\n");
    }
    if (file < size) {
        mini_printf("read didn’t complete the entire buffer\n");
    }
    if (file == size) {
        mini_printf("read completed the entire buffer\n");
    }
}

void fs_cat_500_bytes(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char buffer[501];
    size_t bytesRead = read(fd, buffer, 500);

    buffer[bytesRead] = '\0';
    mini_printf("%s\n", buffer);
    close(fd);
}

void check_file(const char *filepath)
{
    int warning = 0;
    char *buffer = (char *) malloc(sizeof(char) * 256);
    int i = 0;

    while (buffer[i] != '\n' && buffer[i] != '\0') {
        if (buffer[i] == '.' || buffer[i] == 'o')
            warning++;
        i++;
    }
    if (warning > 0){
        mini_printf("file not valid\n");
    }
    i += 2;
    for (int j = 0; buffer[i] != '\0'; j++) {
        if (buffer[i] != '.' && buffer[i] != 'o' && buffer[i] != '\n')
            buffer[i] = '\0';
        mini_printf("file is not valid\n");
        i++;
    }
    mini_printf("file valide\n", buffer);
}
