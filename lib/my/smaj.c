/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-allan.charlier
** File description:
** smaj.c
*/

#include "../../includes/bsprintf.h"

void s_maj(char *str)
{
    int i = 0;

    while (str[i] != '\0'){
        if (str[i] >= 0 && str[i] <= 7) {
            my_putstr("\\00");
            int_tooct(str[i]);
        } else if (str[i] < 32 || str[i] >= 127) {
            my_putstr("\\0");
            int_tooct(str[i]);
        } else
            my_putchar(str[i]);
        i++;
    }
}