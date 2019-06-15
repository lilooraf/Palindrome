/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef __MY_H__
#define __MY_H__

#include <stddef.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <glob.h>
#include <math.h>
#include "my.h"
#include "struct.h"

char *read_file(char *fp);
char *my_revstr(char *str);
flags_t getopt_flag(int ac, char **av);
int ftc_n(flags_t fl, int n_val);
int ftc_p(flags_t fl, int n_val);
char *deci_to_base(int nb, int base);
int base_to_deci(char *nb, int base);
void is_num(char *str);
void error_management(flags_t fl);
void my_exit(void);
int my_squareroot_synthesis(int nb);
int my_factrec_synthesis(int nb);

#endif
