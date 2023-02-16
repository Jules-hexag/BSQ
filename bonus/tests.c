/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-jules.fradin
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <criterion/logging.h>

int bsq(int const argc, char * const * const argv);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(unit_tests, gen_bsq, .init=redirect_all_std)
{
    char *original = "xo.\no.o\n.o.\n";
    bsq(3, (char *[]) {"", "3", ".o"});
    cr_assert_stdout_eq_str(original);
}

Test(unit_tests, intermediate_map_10000_10000, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_10000_10000", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_10000_10000"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_1000_1000, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_1000_1000", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_1000_1000"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_1000_1000_2, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_1000_1000_2", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_1000_1000_2"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_100_100, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_100_100", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_100_100"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_187_187_empty, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_187_187_empty", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_187_187_empty"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_187_187_filled, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_187_187_filled", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_187_187_filled"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_187_187_with_obstacles_25pc, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_187_187_with_obstacles_25pc", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_187_187_with_obstacles_25pc"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_187_187_with_obstacles_50pc, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_187_187_with_obstacles_50pc", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_187_187_with_obstacles_50pc"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_187_187_with_obstacles_75pc, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_187_187_with_obstacles_75pc", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_187_187_with_obstacles_75pc"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_2000_2000, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_2000_2000", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_2000_2000"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_200_200, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_200_200", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_200_200"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_34_137_empty, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_34_137_empty", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_34_137_empty"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_34_137_filled, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_34_137_filled", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_34_137_filled"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_34_137_with_obstacles_25pc, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_34_137_with_obstacles_25pc", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_34_137_with_obstacles_25pc"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_34_137_with_obstacles_50pc, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_34_137_with_obstacles_50pc", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_34_137_with_obstacles_50pc"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_34_137_with_obstacles_75pc, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_34_137_with_obstacles_75pc", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_34_137_with_obstacles_75pc"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_5000_5000, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_5000_5000", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_5000_5000"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_500_500, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_500_500", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_500_500"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_500_500_2, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_500_500_2", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_500_500_2"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_500_500_3, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_500_500_3", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_500_500_3"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_97_21_empty, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_97_21_empty", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_97_21_empty"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_97_21_filled, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_97_21_filled", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_97_21_filled"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_97_21_with_obstacles_25pc, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_97_21_with_obstacles_25pc", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_97_21_with_obstacles_25pc"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_97_21_with_obstacles_50pc, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_97_21_with_obstacles_50pc", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_97_21_with_obstacles_50pc"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_97_21_with_obstacles_75pc, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_97_21_with_obstacles_75pc", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_97_21_with_obstacles_75pc"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_empty_corners, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_empty_corners", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_empty_corners"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_filled_corners, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_filled_corners", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_filled_corners"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_one_column_with_obstacles_25pc, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_one_column_with_obstacles_25pc", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_one_column_with_obstacles_25pc"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_one_column_with_obstacles_50pc, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_one_column_with_obstacles_50pc", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_one_column_with_obstacles_50pc"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_one_column_with_obstacles_75pc, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_one_column_with_obstacles_75pc", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_one_column_with_obstacles_75pc"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_one_empty_box, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_one_empty_box", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_one_empty_box"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_one_empty_column, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_one_empty_column", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_one_empty_column"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_one_empty_line, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_one_empty_column", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_one_empty_column"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_one_filled_box, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_one_filled_box", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_one_filled_box"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_one_filled_column, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_one_filled_column", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_one_filled_column"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_one_filled_line, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_one_filled_line", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_one_filled_line"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_one_line_with_obstacles_25pc, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_one_line_with_obstacles_25pc", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_one_line_with_obstacles_25pc"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_one_line_with_obstacles_50pc, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_one_line_with_obstacles_50pc", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_one_line_with_obstacles_50pc"});
    cr_assert_stdout_eq(original);
    fclose(original);
}

Test(unit_tests, intermediate_map_one_line_with_obstacles_75pc, .init=redirect_all_std)
{
    FILE *original = fopen("./bonus/mouli_maps_solved/intermediate_map_one_line_with_obstacles_75pc", "r");
    bsq(2, (char *[]) {"", "./bonus/mouli_maps/intermediate_map_one_line_with_obstacles_75pc"});
    cr_assert_stdout_eq(original);
    fclose(original);
}
