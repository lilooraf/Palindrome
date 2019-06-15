/*
** EPITECH PROJECT, 2019
** requirement
** File description:
** palindrome
*/

int my_factrec_synthesis(int nb)
{
    if (nb == 0)
        return 1;
    if (nb < 0 || nb > 12)
        return 0;
    return (nb * my_factrec_synthesis(nb - 1));
}

int my_squareroot_synthesis(int nb)
{
    for (int res = 0; res < 9999; res++)
        if (nb == (res * res))
            return res;
    return -1;
}
