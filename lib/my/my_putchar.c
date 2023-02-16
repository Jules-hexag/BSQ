/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** for not to display annoying styme error
*/
#include <unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}
