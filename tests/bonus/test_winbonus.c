/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** test if return is good
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "matchstick.h"

Test(bonus, winnerbonus)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 0;
	board->winner = 1;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(check_winner_bonus(board) == 2);
}

Test(bonus, winner2bonus)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 0;
	board->winner = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(check_winner_bonus(board) == 1);
}

Test(bonus, winner3bonus)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 2;
	board->winner = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(check_winner_bonus(board) == 0);
}
