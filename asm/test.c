/*
** EPITECH PROJECT, 2019
** CPE_corewar_2019
** File description:
** test.c
*/

#include "include/asm.h"

int main(void)
{
    FILE * fp;
    file_data_t data = {};

    fp = fopen ("file", "r+");
    if (!fp) {
        printf("failed to open file");
        exit(84);
    }
    get_name_and_comment(&data, fp);
    fclose(fp);
    return (0);
}