/*
** EPITECH PROJECT, 2019
** my_world
** File description:
** info_struct
*/

#include <stdbool.h>

#ifndef _STRUCT_H_
#define _STRUCT_H_

typedef struct s_flags {
    bool n;
    int n_val;
    bool p;
    int p_val;
    char *p_str;
    bool b;
    int b_val;
    bool imin;
    int imin_val;
    bool imax;
    int imax_val;
    bool h;
}flags_t;

typedef struct s_fct_ptr {
    int flag;
    void (*ptr)(flags_t *, char *);
}fct_ptr_t;

void fct_i(flags_t *fl, char *arg);
void fct_h(flags_t *fl, char *arg);
void fct_n(flags_t *fl, char *arg);
void fct_p(flags_t *fl, char *arg);
void fct_b(flags_t *fl, char *arg);
void fct_exit(flags_t *fl, char *arg);

#endif
