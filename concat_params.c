/*
** EPITECH PROJECT, 2019
** concat_params.c
** File description:
** concat params
*/

#include <stdlib.h>

int my_strlen(char const *str);
char *my_strcat(char *dest, char const *src);
char *my_putstr(char *str);

char *concat_params(int argc, char **argv)
{
    char *str;
    int len = 0;

    for (int i = 0; i < argc; i++)
        len = len + my_strlen(argv[i]);
    str = malloc(sizeof(char) * (len + argc + 1));
    for (int i = 0; i < argc; i++) {
        my_strcat(str, argv[i]);
        my_strcat(str, "\n");
    }
    str[my_strlen(str) - 1] = '\0';
    return (str);
}
