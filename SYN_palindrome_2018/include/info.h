/*
** EPITECH PROJECT, 2019
** my_world
** File description:
** info_struct
*/

#include <stdbool.h>

#ifndef _INFO_H_
#define _INFO_H_

fct_ptr_t const flags[] =
{
    {'n', &fct_n},
    {'p', &fct_p},
    {'b', &fct_b},
    {'i', &fct_i},
    {'h', &fct_h},
    {'?', &fct_exit},
    {0, NULL}
};

#endif
