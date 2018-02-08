/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** random
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "matchstick.h"

Test(ia, random)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	random_line(board);
	cr_assert(board->line_ai > 0);
}

Test(ia, randomatches)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 1;
	board->line_ai = 1;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	random_matches(board);
	cr_assert(board->matches_ai == 1);
}

Test(ia, randomatches2)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 2;
	board->line_ai = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	random_matches(board);
	cr_assert(board->matches_ai > 0);
}

Test(ia, randomatche3)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 2;
	board->line_ai = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	random_matches(board);
	cr_assert(board->matches_ai > 0);
}

Test(ia, randomatches4)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 2;
	board->line_ai = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	random_matches(board);
	cr_assert(board->matches_ai == 2);
}
