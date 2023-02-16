/*
** EPITECH PROJECT, 2022
** is_printable
** File description:
** feurgyuri
*/

int my_str_isprintable(char const *str)
{
    int i = 0;
    while (str[i] != 0) {
        if (str[i] < 32 || str[i] > 127)
            return 0;
        i++;
    }
    if (i == 0)
        return 0;
    return 1;
}
