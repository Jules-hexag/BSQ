/*
** EPITECH PROJECT, 2022
** task05
** File description:
** square roots
*/

int my_compute_square_root(int nb)
{
    int i = 1;
    int res = 0;

    if (nb < 1)
        return 0;

    while (i <= 3640) {
        if (i > 46340)
            return 0;
        res = i * i;
        if (res == nb)
            return i;
        if (res > nb)
            return 0;
        i++;
    }
    return 0;
}
