/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-jules.fradin
** File description:
** creation_int_tableau
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "bsq.h"
#include "my.h"

static int is_hurdle(char *map, int i)
{
    if (map[i] != '.' && map[i] != 'o' && map[i] != '\n' && map[i] != '\0')
        exit(84);
    if (map[i] == '.') {
        return 1;
    } else if (map[i] == 'o') {
        return 2;
    } else {
        return 3;
    }
}

static void set_in_int_arrarr(int **the_map, int j, int k, int is_hurdle_answer)
{
    if (is_hurdle_answer == 1) {
        the_map[j][k] = 1;
    } else if (is_hurdle_answer == 2) {
        the_map[j][k] = 0;
    } else
        the_map[j][k] = '\0';
}

int **string_to_tab(char *map, int width, int height, int index)
{
    int **the_map = malloc(sizeof(int *) * (height + 1));
    if (!the_map)
        return NULL;
    int i = index;
    int j = 0;
    the_map[height] = NULL;
    while (i < (width + 1) * height + index) {
        the_map[j] = malloc(sizeof(int) * (width + 1));
        if (!the_map[j]) {
            free(the_map);
            return NULL;
        }
        for (int k = 0; k <= width; k++) {
            set_in_int_arrarr(the_map, j, k, is_hurdle(map, i));
            i++;
        }
        j++;
    }
    return the_map;
}

int get_width(char *map)
{
    int i = 0;
    int width = 0;
    while (map[i] != '\n' && map[i] != '\0')
        i++;
    i++;
    while (map[width + i] != '\n' && map[width + i] != '\0')
        width++;
    return width;
}

int **str_map_management(char *path, int fd, int size, char *map)
{
    int i = 0;
    int height = get_height(map);
    int width = get_width(map);
    close(fd);
    return (string_to_tab(map, width, height, (get_first_line_size(map) + 1)));
}
