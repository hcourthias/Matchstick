/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** test detection of number pair
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "matchstick.h"

Test(ia, pair)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 99;
	board->lines = 3;
	board->stick = NULL;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	one_is_pair(board, 1);
	cr_assert(board->matches_ai == 2);
}

Test(ia, pair2)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 3;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	one_is_pair(board, 2);
	cr_assert(board->matches_ai == 1);
}

Test(ia, impair)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 99;
	board->lines = 3;
	board->stick = NULL;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	one_is_not_pair(board, 1);
	cr_assert(board->matches_ai == 3);
}

Test(ia, impair2)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 3;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	one_is_not_pair(board, 2);
	cr_assert(board->matches_ai == 1);
}
