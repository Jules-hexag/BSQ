/*
** EPITECH PROJECT, 2022
** strncat
** File description:
** hezezoeo4
*/

char *my_strncat(char *dest, const char *src, int n)
{
    int i;
    int taille = 0;

    while (dest[taille] != '\0')
        taille++;

    taille;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[taille + i] = src[i];
    dest[taille + i] = '\0';

    return dest;
}
