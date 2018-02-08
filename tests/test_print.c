/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** test print fct
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "matchstick.h"

Test(text, print_text_error)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 2;
	cr_redirect_stdout();
	print_text_error(board);
	cr_assert_stdout_eq_str(
		"Error: you cannot remove more than 2 matches per turn\n");
}

Test(text, print_text_2)
{
	board_t *board = malloc(sizeof(board_t));

	board->number_matches = 2;
	board->number_line = 2;
	board->lines = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	print_text_info(board);
	cr_assert_stdout_eq_str(
	"Player removed 2 match(es) from line 2\n*****\n* | *\n*|  *\n*****\n");
}

Test(text, print_text_ia)
{
	board_t *board = malloc(sizeof(board_t));

	board->number_matches = 2;
	board->number_line = 2;
	board->lines = 2;
	board->line_ai = 2;
	board->matches_ai = 2;

	cr_redirect_stdout();
	fill_tab_of_stick(board);
	print_text_info_ia(board);
	cr_assert_stdout_eq_str(
	"AI removed 2 match(es) from line 2\n*****\n* | *\n*|  *\n*****\n");
}

Test(text, printgameboard)
{
	cr_redirect_stdout();
	print_game_board(2);
	cr_assert_stdout_eq_str(
		"*****\n* | *\n*|||*\n*****\n\n");
}
