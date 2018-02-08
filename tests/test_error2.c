/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** error test
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <fcntl.h>
#include <unistd.h>
#include "matchstick.h"

Test(error, input_error)
{
	char **str = NULL;

	cr_assert(input_error(2, str) == 1);
}

Test(error, error_matches2)
{
	board_t *board = malloc(sizeof(board_t));
	char *str = malloc(sizeof(char) * 2);

	str = "2";
	board->matches = 2;
	board->lines = 2;
	board->number_line = 1;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(check_error_matches(str, board) == 0);
	free(board);
}

Test(error, error_matches3)
{
	board_t *board = malloc(sizeof(board_t));
	char *str = malloc(sizeof(char) * 2);

	str = "2";
	board->matches = 2;
	board->lines = 2;
	board->number_line = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(check_error_matches(str, board) == 2);
	free(board);
}
