/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "my.h"
#include "info.h"

void fct_exit(flags_t *fl, char *arg)
{
    (void) arg;
    (void) fl;
    my_exit();
}

void init_flags_struct(flags_t *fl)
{
    fl->imax = false;
    fl->imin = false;
    fl->n = false;
    fl->p = false;
    fl->b = false;
    fl->h = false;
    fl->imax_val = 100;
    fl->imin_val = 0;
    fl->n_val = 0;
    fl->p_val = 0;
    fl->p_str = NULL;
    fl->b_val = 10;
}

flags_t getopt_flag(int ac, char **av)
{
    flags_t fl;
    int catch = 0;
    int imax = 100;
    int imin = 0;

    init_flags_struct(&fl);
    for (int i = 1; av[i]; i++) {
        (av[i][0] != '-') ? is_num(av[i]) : 0;
        (!strcmp(av[i], "-imax")) ?
        is_num(av[i + 1]), imax = atoi(av[i + 1]) : 0;
        (!strcmp(av[i], "-imin")) ?
        is_num(av[i + 1]), imin = atoi(av[i + 1]) : 0;
    }
    while ((catch = getopt(ac, av, "i:n:p:b:h")) != -1)
        for (int i = 0; flags[i].flag != 0; i++)
            (catch == flags[i].flag) ? flags[i].ptr(&fl, optarg) : 0;
    (imin > imax) ? my_exit() : 0;
    fl.imax_val = imax;
    fl.imin_val = imin;
    return (fl);
}
