/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** test detection of number pair
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <fcntl.h>
#include <unistd.h>
#include "matchstick.h"

Test(lib, pair5)
{
	int i = 1;

	cr_assert(my_is_pair(i) == 1);
}

Test(lib, pair4)
{
	cr_assert(my_is_pair(-1) == 1);
}

Test(lib, pair3)
{
	cr_assert(my_is_pair(4) == 0);
}
