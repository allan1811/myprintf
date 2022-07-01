/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-allan.charlier
** File description:
** flagx.c
*/

#include <stdarg.h>
#include "../includes/bsprintf.h"

void flagx(va_list list)
{
    int_tohex(va_arg(list, int));
}