/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-jules.fradin
** File description:
** generate_map
*/

#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include "bsq.h"
#include "my.h"

static void errors_on_generating(char *size_map, char *pattern)
{
    int side_sizeof_square = my_getnbr(size_map);
    int pattern_len = my_strlen(pattern);
    if (side_sizeof_square * side_sizeof_square < pattern_len)
        exit(84);
    if (pattern_len < 1)
        exit(84);
    for (int i = 0; pattern[i] != '\0'; i++) {
        if (pattern[i] != '.' && pattern[i] != 'o')
            exit(84);
    }
}

int append_num_to_buf(char *size_map, char *pattern, char *map_created)
{
    int j = 0;
    while (j != my_strlen(size_map)) {
        map_created[j] = size_map[j];
        j++;
    }
    map_created[j] = '\n';
    j++;
    return j;
}

void add_char_to_buf(char *map_created, int size_map, char *pattern)
{
    if (map_created == NULL) return;
    int a = 0;
    int nb_digit = my_strlen(map_created);
    int size = (size_map + 1) * size_map + nb_digit;
    for (int i = nb_digit; i < size; i++) {
        if (pattern[a] == '\0')
            a = 0;
        if ((i - nb_digit) % (size_map + 1) == size_map) {
            map_created[i] = '\n';
        } else {
            map_created[i] = pattern[a];
            a++;
        }
    }
}

int generate_map(char *path, char *size_map, char *pattern)
{
    errors_on_generating(size_map, pattern);
    int side_sizeof_sq = my_getnbr(size_map);
    int size = (side_sizeof_sq + 1) * side_sizeof_sq + my_strlen(size_map) + 1;
    char *map_created = malloc(sizeof(char) * size + 1);
    if (!map_created)
        exit(84);
    int fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    char buff;
    if (fd == -1)
        exit(84);
    append_num_to_buf(size_map, pattern, map_created);
    add_char_to_buf(map_created, side_sizeof_sq, pattern);
    write(fd, map_created, size);
    close(fd);
    free(map_created);
    return size;
}
