/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** test genral solv fct
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "matchstick.h"

Test(ia, find1)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 99;
	board->lines = 3;
	board->number_line = 1;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	board->stick[0] = 0;
	cr_assert(find_a_solution(board, 2) == 2);
}

Test(ia, find2)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 99;
	board->lines = 3;
	board->number_line = 1;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	board->stick[0] = 0;
	cr_assert(find_a_solution(board, 0) == 1);
}

Test(ia, find3)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 99;
	board->lines = 3;
	board->number_line = 1;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	board->stick[0] = 0;
	cr_assert(find_a_solution(board, 1) == 0);
}
