/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** random
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "matchstick.h"

Test(ia, randomi)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	board->stick[0] = 0;
	board->stick[1] = 0;
	cr_assert(random_line(board) == 0);
}
