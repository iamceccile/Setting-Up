/*
** EPITECH PROJECT, 2023
** step 2
** File description:
** setting_up
*/

void array_1d_print_chars(char const *arr)
{
    char c; 
    while (arr[c] != '\0') {
        mini_printf("%c\n", arr[c]);
        c++;
    }
}

void array_1d_print_ints (int const *arr, int size)
{
    int i;
    while (arr[i] != '\0') {
        mini_printf("%c\n", arr[i]);
        i++;
    }
}
