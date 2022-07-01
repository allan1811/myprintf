/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-allan.charlier
** File description:
** flagX.c
*/

#include <stdarg.h>
#include "../includes/bsprintf.h"

void flagxmin(va_list list)
{
    int_tohexmin(va_arg(list, int));
}