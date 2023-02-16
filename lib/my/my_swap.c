/*
** EPITECH PROJECT, 2022
** task01
** File description:
** swap the content of two integers
*/

void my_swap(int *a, int *b)
{
    int buf = *a;
    *a = *b;
    *b = buf;
}
