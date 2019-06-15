/*
** EPITECH PROJECT, 2019
** getopt_long
** File description:
** getopt_long
*/

#include "my.h"

void fct_i(flags_t *fl, char *arg)
{
    if (!strcmp(arg, "min"))
        fl->imin = true;
    else if (!strcmp(arg, "max"))
        fl->imax = true;
    else
        my_exit();
}

void fct_n(flags_t *fl, char *arg)
{
    is_num(arg);
    fl->n = true;
    fl->n_val = atoi(arg);
}

void fct_p(flags_t *fl, char *arg)
{
    is_num(arg);
    fl->p = true;
    fl->p_val = atoi(arg);
    fl->p_str = arg;
}

void fct_b(flags_t *fl, char *arg)
{
    is_num(arg);
    if (atoi(arg) < 2)
        my_exit();
    fl->b = true;
    fl->b_val = atoi(arg);
}

void fct_h(flags_t *fl, char *arg)
{
    (void) arg;
    (void) fl;
    printf("%s", read_file("usage.txt"));
    exit(0);
}