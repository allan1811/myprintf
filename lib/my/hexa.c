/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-allan.charlier
** File description:
** hexa.c
*/

#include "../../includes/bsprintf.h"

void int_tohex(int num)
{
    int rem = 0;
    int i = 0;
    char hex[100];

    while (num != 0) {
        rem = num % 16;
        if (rem < 10) {
            hex[i++] = 48 + rem;
        } else {
            hex[i++] = 55 + rem;
        }
        num = num /16;
    }
    for (int j = i - 1; j >= 0 ; j--) {
        my_putchar(hex[j]);
    }
}