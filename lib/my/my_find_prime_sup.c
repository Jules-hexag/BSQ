/*
** EPITECH PROJECT, 2022
** find prime sup
** File description:
** gvrezbyzfç
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    if (my_is_prime(nb) == 1) {
        return nb;
    }
    for (int i = nb + 1; i < 2147483647; i++) {
        if (my_is_prime(i) == 1) {
            return i;
        }
    }
    return -1;
}
