/*
** EPITECH PROJECT, 2021
** project
** File description:
** ..
*/

#include "../../includes/bsprintf.h"

void int_tobinary(int n)
{
    if (n > 1)
        int_tobinary(n / 2);
    my_put_nbr(n % 2);
}