/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** test ia and xor
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "matchstick.h"

Test(ia, xor)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 2;
	board->lines = 3;
	board->number_line = 1;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(xor(board) == 7);
}

Test(ia, ia_hard)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(make_ia_hard_play(board) == 0);
}

Test(ia, ia_hard2)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 99;
	board->lines = 3;
	board->number_line = 1;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	board->stick[0] = 0;
	fill_tab_of_stick(board);
	cr_assert(make_ia_hard_play(board) == 0);
}
