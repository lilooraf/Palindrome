/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    flags_t fl;
    fl = getopt_flag(ac, av);
    int nb = 0;

    error_management(fl);
    if (fl.p) {
        (strcmp(deci_to_base(fl.p_val, fl.b_val),
        my_revstr(strdup(deci_to_base(fl.p_val, fl.b_val))))) ? my_exit() : 0;
        fl.p_val = atoi(deci_to_base(fl.p_val, fl.b_val));
        for (int i = 0; i <= atoi(fl.p_str); i++)
            nb += ftc_p(fl, i);
        if (!nb)
            printf("no solution\n");
    }
    else
        ftc_n(fl, fl.n_val);
    return 0;
}