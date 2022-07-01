/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-allan.charlier
** File description:
** flagS.c
*/

#include <stdarg.h>
#include "../includes/bsprintf.h"

void flagsmaj(va_list list)
{
    s_maj(va_arg(list, char *));
}
