/*
** EPITECH PROJECT, 2023
** my_h project
** File description:
** my_h setting up
*/

#ifndef MY_H_
    #define MY_H_
int my_putstr(char const *str);
int mini_printf(const char *format, ...);
void my_putchar(char c);
int my_put_nbr(int nb);
void my_maximum(void);
int fs_open_file(char const *filepath);
int fs_understand_return_of_read(int fd, char *buffer, int size);
void fs_cat_500_bytes(char const *filepath);
void fs_cat_x_bytes(char const *filepath , int x);
int fs_get_number_from_first_line(const char *filename);
void array_1d_print_chars(char const *arr);
void array_1d_print_ints(int const *arr, int size);
void check_file(const char *filepath);
int my_strlen(char const *str);
#endif/* MY_H_ */
