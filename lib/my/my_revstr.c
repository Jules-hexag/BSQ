/*
** EPITECH PROJECT, 2022
** task3
** File description:
** revrse a string
*/

//pour l'appel, le paramètre doit être une variable char* définie à l'avance
//pour l'appel, ne pas mettre &

char *my_revstr(char *str)
{
    int taille = 0;
    int fin = 0;
    char buf;

    while (str[taille] != '\0')
        taille++;

    for (int i = 0; i < taille / 2; i++) {
        fin = taille - i - 1;
        buf = str[i];
        str[i] = str[fin];
        str[fin] = buf;
    }

    return str;
}
