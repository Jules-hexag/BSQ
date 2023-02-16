/*
** EPITECH PROJECT, 2022
** str to arr
** File description:
** from scratch = 4
*/

#include "my.h"
#include <stdlib.h>

int is_alphanum(char c)
{
    if (c > 47 && c < 58)
        return 1;
    if (c > 64 && c < 91)
        return 1;
    if (c > 96 && c < 123)
        return 1;
    return 0;
}

int count_words(char const *str)
{
    int nombre_mots = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_alphanum(str[i]) && !is_alphanum(str[i + 1]))
            nombre_mots += 1;
    }
    return nombre_mots;
}

char **my_str_to_word_array(char const *str)
{
    int nombre_mots = count_words(str);
    char *tab[] = malloc(sizeof(char*) * nombre_mots + 1);
    tab[nombre_mots] = 0;
}
