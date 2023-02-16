/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-jules.fradin
** File description:
** 2_search
*/

#include "bsq.h"
#include "my.h"
#include <unistd.h>


void find_bottom_right_bsq(int **map, int j, int i)
{
    if (map[j][i] == 0)
        return;

    int bottom_right = map[j + 1][i + 1];
    int bottom = map[j + 1][i];
    int right = map[j][i + 1];
    int minimum = right;

    if (bottom_right <= bottom && bottom_right <= right)
        minimum = bottom_right;
    if (bottom <= bottom_right && bottom <= right)
        minimum = bottom;

    map[j][i] = minimum + 1;
}

static int is_gt(int maximum, int to_check)
{
    if (to_check > maximum)
        return to_check;
    return maximum;
}

static int set_pos_bsq(important_values_t *bsq, int **map)
{
    int i = bsq->i;
    int j = bsq->j;
    if (map[i][j] > bsq->bsq_size) {
        bsq->pos_line = i;
        bsq->pos_column = j;
        bsq->bsq_size = map[i][j];
    }
    return 0;
}

void find_bsq_size(int **map, important_values_t *bsq)
{
    bsq->bsq_size = 0;
    for (int i = 0; i < bsq->height_map; i++) {
            bsq->i = i;
        for (int j = 0; j < bsq->width_map; j++) {
            bsq->j = j;
            set_pos_bsq(bsq, map);
        }
    }
}
