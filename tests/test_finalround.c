/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** tests ia on final round
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "matchstick.h"

Test(fround, finalround)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 2;
	board->winner = 2;
	board->matches_ai = 2;
	board->line_ai = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(final_round(board) == 2);
}

Test(fround, finalround2)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 3;
	board->winner = 2;
	board->matches_ai = 2;
	board->line_ai = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(final_round(board) == 0);
}
