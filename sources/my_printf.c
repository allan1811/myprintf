/*
** EPITECH PROJECT, 2021
** myprintf
** File description:
** project
*/

#include "../includes/bsprintf.h"
#include <stdarg.h>

void check (char *s, int i, va_list list)
{
    void (*fonction[11])(va_list) = {flagc, flagi, flagd, flags, flagxmin,
        flagx, flagb, flago, flagu, flagsmaj, flagpourcent};
    char *f = "cidsxXbouS%";

    for (int j = 0; f[j] != '\0'; j++) {
        if (s[i] == f[j]) {
            (*fonction[j])(list);
        }
    }
}

void my_printf(char *s, ...)
{
    va_list list;
    int	z = 0;

    va_start(list, s);
    while (s[z] != '\0') {
        if (s[z] == '%') {
            z++;
            check(s, z, list);
        } else
            my_putchar(s[z]);
        z++;
    }
    va_end(list);
}
