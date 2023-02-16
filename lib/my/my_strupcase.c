/*
** EPITECH PROJECT, 2022
** strupcase
** File description:
** capitalize every letters
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 96 && str[i] < 123)
            str[i] -= 32;
        i++;
    }

    return str;
}
