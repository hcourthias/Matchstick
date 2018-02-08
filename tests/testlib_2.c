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

Test(get_next_line, read_line_null)
{
	int fd = open("data0.txt", O_RDONLY);
	char *expected = NULL;
	char *got = get_next_line(fd);

	cr_redirect_stdout();
	close(fd);
}

Test(lib, pnbr1)
{
	cr_redirect_stdout();
	my_put_nbr(10);
	cr_assert_stdout_eq_str("10");
}

Test(lib, pnbr2)
{
	int i = -1;

	cr_redirect_stdout();
	my_put_nbr(i);
	cr_assert_stdout_eq_str("-01");
}

Test(lib, pnbr3)
{
	cr_redirect_stdout();
	my_put_nbr(2);
	cr_assert_stdout_eq_str("2");
}

Test(lib, getnbr2)
{
	char *str = "sdfghj";
	
	cr_redirect_stdout();
	cr_assert(my_getnbr(str) == 0);
}
