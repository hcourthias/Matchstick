/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** test if return is good
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "matchstick.h"

Test(win, winner)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 0;
	board->winner = 1;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(check_winner(board) == 2);
}

Test(win, winner2)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 0;
	board->winner = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(check_winner(board) == 1);
}

Test(win, winner4)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 2;
	board->winner = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(check_winner(board) == 0);
}
