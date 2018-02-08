/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** testlib
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <fcntl.h>
#include <unistd.h>
#include "matchstick.h"

Test(lib, my_strlen)
{
	char *str = "coucou";
	cr_redirect_stdout();
	cr_assert(my_strlen(str) == 6);
}

Test(lib, my_putchar)
{
	char c = 'c';
	cr_redirect_stdout();
	my_putchar(c);
	cr_assert_stdout_eq_str("c");
}

Test(lib, getnbr)
{
	char *str = "12";
	cr_redirect_stdout();
	cr_assert(my_getnbr(str) == 12);
}

Test(lib, putstr)
{
	char *str = "coucou";
	cr_redirect_stdout();
	my_putstr(str);
	cr_assert_stdout_eq_str("coucou");
}

Test(get_next_line, read_line)
{
	int fd = open("data.txt", O_RDONLY);
	cr_redirect_stdout();
	char *expected = "Confidence is so overrated.";
	char *got = get_next_line(fd);
	close(fd);
}
