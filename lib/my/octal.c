/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-allan.charlier
** File description:
** octal.c
*/

#include "../../includes/bsprintf.h"

int int_tooct(int n)
{
    if (n > 0) {
        int_tooct(n / 8);
        my_put_nbr(n % 8);
    }
    else {
        return (0);
    }
}