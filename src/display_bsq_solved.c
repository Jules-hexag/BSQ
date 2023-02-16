/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-jules.fradin
** File description:
** display_bsq_solved
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"
#include "bsq.h"

static int check_if_in_bsq(important_values_t *bsq)
{
    int in = 0;
    if (bsq->pos_column <= bsq->i && bsq->i < bsq->pos_column + bsq->bsq_size)
        in += 1;
    if (bsq->pos_line <= bsq->j && bsq->j < bsq->pos_line + bsq->bsq_size)
        in += 1;
    if (in == 2)
        return 1;
    return 0;
}

static void change_map(int num, important_values_t *bsq, char *map_str)
{
    int k = 0;
    while (map_str[k] != '\n')
        k++;
    k++;
    if (num > 0 && check_if_in_bsq(bsq) && bsq->height_map != 1)
        map_str[k + ((bsq->width_map + 1) * bsq->j) + bsq->i] = 'x';
}

void scan_for_display(int **map, important_values_t *bsq, char *map_str)
{
    for (int j = 0; j < bsq->height_map; j++) {
        for (int i = 0; i <= bsq->width_map; i++) {
            bsq->i = i;
            bsq->j = j;
            change_map(map[j][i], bsq, map_str);
        }
    }
}

void print_str(char *map, int size)
{
    int i = 0;
    while (map[i] != '\n')
        i++;
    i++;
    write(1, &map[i], size - i);
}
