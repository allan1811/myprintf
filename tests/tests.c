/*
** EPITECH PROJECT, 2021
** test
** File description:
** testprintf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/bsprintf.h"

void redirect_all_std(void)
{
    cr_redirect_stdout ();
    cr_redirect_stderr ();
}

Test(my_printf , mixed_string , .init = redirect_all_std)
{
    my_printf("%s, %d, %c, %i", "je", 12, 'l', 14);
    cr_assert_stdout_eq_str("je, 12, l, 14");
}

Test(my_printf , hexa , .init = redirect_all_std)
{
    my_printf("%x, %X", 15, 15);
    cr_assert_stdout_eq_str("f, F");
}

Test(my_printf , mix , .init = redirect_all_std)
{

    my_printf("Bin 10 %b + %s. %s %x et d'%s %x", 10,
        "la pool", "Hx 50", 50, "Octal 55", 55);
    cr_assert_stdout_eq_str("Bin 10 1010 + la pool. Hx 50 32 et d'Octal 55 37");

}