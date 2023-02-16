/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-jules.fradin
** File description:
** create_str
*/

#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include "bsq.h"
#include "my.h"

char *create_map(int size, int fd)
{
    char *map = malloc(size + 1);
    if (!map) return NULL;
    if (read(fd, map, size) == -1) return NULL;
    map[size] = '\0';
    return map;
}

int check_errors(int fd, int size, char *map, important_values_t bsq)
{
    int i = 0;
    int num_bckslh_n = 0;
    if (fd == -1 || size == -1 || !map) { free(map);
        exit (84);
    }
    while (map[i] != '\n' && map[i] != '\0')
        i++;
    i++;
    for (int l = 0; map[l] != '\0'; l++)
        if (map[l] == '\n')
            num_bckslh_n++;
    num_bckslh_n++;
    if ((num_bckslh_n - 2) != bsq.height_map || num_bckslh_n < 2) { free(map);
        exit(84);
    }
    if (bsq.global_size - i != (bsq.width_map + 1) * (bsq.height_map)) {
        free(map);
        exit(84);
    } return 0;
}

int get_first_line_size(const char *map)
{
    int result = 0;
    while (map[result] != '\n' && map[result] != '\0')
        result++;
    return (result);
}

int get_size(char const *path)
{
    struct stat *buff = malloc(sizeof(struct stat));
    if (!buff)
        exit(84);

    if (stat(path, buff) == -1) { free(buff);
        exit(84);
    }
    int size = buff->st_size;
    free(buff);
    return size;
}

int get_height(char *map)
{
    int i = 0;
    int size = 0;
    char *first_line = malloc(sizeof(char) * ((get_first_line_size(map)) + 1));
    if (!first_line) exit(84);

    while (map[i] != '\n' && map[i] != '\0') {
        first_line[i] = map[i];
        i++;
    }
    first_line[i] = '\0';
    size = my_getnbr(first_line);
    free(first_line);
    return size;
}
