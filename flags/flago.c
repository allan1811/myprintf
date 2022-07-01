/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-allan.charlier
** File description:
** flago.c
*/

#include <stdarg.h>
#include "../includes/bsprintf.h"

void flago(va_list list)
{
    int_tooct(va_arg(list, int));
}