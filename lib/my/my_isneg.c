/*
** EPITECH PROJECT, 2022
** task04
** File description:
** is_negative
*/

#include "my.h"

int my_isneg(int number)
{
    if (number < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
}
