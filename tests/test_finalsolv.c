/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** tests fct finalsolv
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "matchstick.h"

Test(fround, finalsolv)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 2;
	board->winner = 2;
	board->matches_ai = 2;
	board->line_ai = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(find_final_solution(board, 1, 1, 2) == 2);
}

Test(fround, finalsolv2)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 2;
	board->winner = 2;
	board->matches_ai = 2;
	board->line_ai = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(find_final_solution(board, 1, 1, 3) == 2);
}

Test(fround, finalsolv3)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 2;
	board->winner = 2;
	board->matches_ai = 2;
	board->line_ai = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(find_final_solution(board, 0, 1, 3) == 0);
}
