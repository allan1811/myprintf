/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-allan.charlier
** File description:
** flagb.c
*/

#include <stdarg.h>
#include "../includes/bsprintf.h"

void flagb(va_list list)
{
    int_tobinary(va_arg(list, int));
}