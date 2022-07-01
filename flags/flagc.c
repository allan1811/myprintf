/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-allan.charlier
** File description:
** flagc.c
*/

#include <stdarg.h>
#include "../includes/bsprintf.h"

void flagc(va_list list)
{
    my_putchar(va_arg(list, int));
}