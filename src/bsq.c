/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-jules.fradin
** File description:
** main
*/

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "bsq.h"
#include "my.h"

static void resolve_1(char *map, important_values_t bsq)
{
    for (int i = 0; map[i] != '\0'; i++)
        if (map[i] == '.') {
            map[i] = 'x';
            break;
        }
    print_str(map, bsq.global_size);
}

static void resolve(int **int_map, important_values_t *bsq, int fd, char *map)
{
    find_bsq_size(int_map, bsq);
    scan_for_display(int_map, bsq, map);
    print_str(map, bsq->global_size);
    free(map);
    for (int i = 0; i < bsq->height_map; i++)
        free(int_map[i]);
    free(int_map);
    free(bsq);
    close(fd);
}

void exit_resolve(important_values_t *bsq, char *map)
{
    bsq->height_map = get_height(map);
    if (!bsq->height_map) { free(bsq);
        exit (84);
    }
}

static int pre_resolve(char *file)
{
    important_values_t *bsq = malloc(sizeof(important_values_t));
    int fd = open(file, O_RDONLY);
    if (fd == -1) exit(84);
    bsq->global_size = get_size(file);
    char *map = create_map(bsq->global_size, fd);
    exit_resolve(bsq, map);
    bsq->width_map = get_width(map);
    check_errors(fd, bsq->global_size, map, *bsq);
    if (bsq->height_map == 1 || bsq->width_map == 1) { resolve_1(map, *bsq);
        free(bsq);
        return 0;
    }
    int **int_map = str_map_management(file, fd, bsq->global_size, map);
    int bsq_size = 0;
    if (!int_map) exit(84); for (int j = bsq->height_map - 2; j >= 0; j--)
        for (int i = bsq->width_map - 2; i >= 0; i--)
            find_bottom_right_bsq(int_map, j, i);
    resolve(int_map, bsq, fd, map);
    close(fd);
    return 0;
}

int bsq(int const argc, char * const * const argv)
{
    if (argc == 2) {
        pre_resolve(argv[1]);
        return 0;
    } else if (argc == 3) {
        int size_gen = generate_map("./generated_file", argv[1], argv[2]);
        pre_resolve("./generated_file");
        return 0;
    } else {
        write(2, "Bad argument\n", 13);
        return 84;
    }
}
