/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** palindrome
*/

#include "my.h"

char *deci_to_base(int nb, int base)
{
    char *res = NULL;
    int size = 0;
    int tmp = nb;
    int a = base;

    for (int i = 1; i <= nb / base ; i = i * base, size++);
    res = calloc(sizeof(char), size + 2);
    for (int i = 0; i < size + 1; i++, a = a * base) {
        tmp = nb;
        tmp = tmp % a;
        tmp = tmp / (a / base);
        res[i] = tmp + 48;
    }
    return my_revstr(res);
}

int base_to_deci(char *nb, int base)
{
    int res = 0;
    int i = strlen(nb) - 1;

    for (int r = 0; i != -1; i--, r++)
        res += (nb[i] - 48) * pow(base, r);
    return res;
}

int ftc_p(flags_t fl, int n_val)
{
    char *res = NULL;
    int nb = n_val;

    for (int i = 0; i <= fl.imax_val; i++) {
        res = deci_to_base(nb, fl.b_val);
        if (atoi(res) == fl.p_val && i >= fl.imin_val)
            return (printf("%d leads to %s in %d iteration(s) in base %d\n",
            n_val, fl.p_str, i, fl.b_val));
        nb = base_to_deci(res, fl.b_val) +
        base_to_deci(my_revstr(res), fl.b_val);
        (nb <= 0) ? fl.imax_val = 0 : 0;
        free(res);
        res = NULL;
    }
    return 0;
}

int ftc_n(flags_t fl, int n_val)
{
    char *res = NULL;
    int nb = n_val;

    if (!n_val)
        return (printf("%d leads to %d in %d iteration(s) in base %d\n",
        n_val, n_val, n_val, fl.b_val));
    for (int i = 0; i <= fl.imax_val; i++) {
        res = deci_to_base(nb, fl.b_val);
        if (!strcmp(res, my_revstr(strdup(res))) && i >= fl.imin_val)
            return (printf("%d leads to %d in %d iteration(s) in base %d\n",
            n_val, base_to_deci(res, fl.b_val), i, fl.b_val));
        nb = base_to_deci(res, fl.b_val) +
        base_to_deci(my_revstr(strdup(res)), fl.b_val);
        (nb <= 0) ? fl.imax_val = 0 : 0;
        free(res);
        res = NULL;
    }
    return (printf("no solution\n"));
}