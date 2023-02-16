/*
** EPITECH PROJECT, 2022
** task07
** File description:
** print number given as parameter
*/

#include "my.h"

static int check_null(int nbr);

int my_put_nbr(int nb)
{
    if (nb == 0) {
        my_putchar('0');
        return 0;
    } else {
        check_null(nb);
    }
}

static int check_null(int nbr)
{
    long int nb = nbr;
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nbr == 0) {
        return 0;
    }
    if (nb == 0) {
        return 0;
    }
    if (nbr >= 0 && nbr <= 9) {
        my_putchar(nbr + 48);
        return 0;
    }
    check_null(nb / 10);
    my_putchar(nb % 10 + 48);
}
