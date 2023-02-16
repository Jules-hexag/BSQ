/*
** EPITECH PROJECT, 2022
** task06
** File description:
** check if prime number
*/

static int my_sqrt(int nb)
{
    int i = 1;
    int res = 0;

    if (nb < 1)
        return 0;

    while (i <= 46340) {
        if (i > 46340)
            return 0;
        res = i * i;
        if (res == nb)
            return i;
        if (res > nb)
            return i;
        i++;
    }
    return 0;
}

int my_is_prime(int nb)
{
    if (nb == 2)
        return 1;
    if (nb < 2)
        return 0;

    for (int i = 2; i <= my_sqrt(nb); i++) {
        if (nb / i * i == nb)
            return 0;
    }
    return 1;
}
