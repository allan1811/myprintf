/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-allan.charlier
** File description:
** flags.c
*/

#include <stdarg.h>
#include "../includes/bsprintf.h"

void flags(va_list list)
{
    my_putstr(va_arg(list, char *));
}