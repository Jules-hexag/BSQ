/*
** EPITECH PROJECT, 2022
** task04
** File description:
** powering numbers recursive
*/
int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return 1;
    if (p == 1)
        return nb;
    if (nb >= 46340)
        return 0;
    if (p < 0)
        return 0;

    return nb * my_compute_power_rec(nb, p - 1);
}
