/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-allan.charlier
** File description:
** flagd.c
*/

#include <stdarg.h>
#include "../includes/bsprintf.h"

void flagd(va_list list)
{
    my_put_nbr(va_arg(list, int));
}