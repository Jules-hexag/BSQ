/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-jules.fradin
** File description:
** bsq
*/

#ifndef BSQ_H_
    #define BSQ_H_

    typedef struct important_values_s {
        int global_size;
        int width_map;
        int height_map;
        int i;
        int j;
        int pos_line;
        int pos_column;
        int bsq_size;
    } important_values_t;

    int bsq(int const argc, char * const * const argv);
    int **str_map_management(char *path, int fd, int size, char *map);
    int get_size(char const *path);
    int get_height(char *map);
    int get_width(char *map);
    char *create_map(int size, int fd);
    int get_first_line_size(const char *map);
    int check_errors(int fd, int size, char *map, important_values_t bsq);
    int **string_to_tab(char *map, int width, int height, int index);
    void find_bsq_size(int **map, important_values_t *bsq);
    void scan_for_display(int **map, important_values_t *bsq, char *map_str);
    void find_bottom_right_bsq(int **map, int j, int i);
    void print_str(char *map, int size);
    int generate_map(char *path, char *size_map, char *pattern);

#endif /* !BSQ_H_ */
