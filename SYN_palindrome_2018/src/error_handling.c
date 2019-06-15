/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** error_handling
*/

#include "my.h"

void is_num(char *str)
{
    if (!str)
        return;
    for (int i = 0; str[i]; i++)
        if (str[i] < 48 || str[i] > 57)
            my_exit();
}

void error_management(flags_t fl)
{
    int p = 0;

    if ((fl.p && fl.n) || (!fl.p && !fl.n) || fl.b_val > 10)
        my_exit();
    if (fl.p) {
        p = atoi(deci_to_base(fl.p_val, fl.b_val));
        if (strcmp(deci_to_base(p, 10),
        my_revstr(deci_to_base(p, 10))))
            my_exit();
    }
}

void my_exit(void)
{
    printf("invalid argument\n");
    exit(84);
}