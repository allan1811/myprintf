/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-allan.charlier
** File description:
** flagu.c
*/

#include <stdarg.h>
#include "../includes/bsprintf.h"

void flagu(va_list list)
{
    int n = (va_arg(list, int));
    if (n < 0)
        n = n * - 1;
    my_put_nbr(n);
}