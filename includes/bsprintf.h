/*
** EPITECH PROJECT, 2021
** bsprint
** File description:
** project
*/

#include <stdarg.h>
#ifndef BS_PRINTF_H
    #define BS_PRINTF_H

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
void int_tobinary(int n);
int int_tooct(int n);
void int_tohex(int n);
void int_tohexmin(int num);
void my_printf_u(char c, va_list list);
void s_maj(char *str);
char *my_strlowcase(char *str);
void flagb(va_list list);
void flagc(va_list list);
void flagd(va_list list);
void flagi(va_list list);
void flago(va_list list);
void flagpourcent(va_list list);
void flags(va_list list);
void flagsmaj(va_list list);
void flagu(va_list list);
void flagx(va_list list);
void flagxmin(va_list list);

#endif
