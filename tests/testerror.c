/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** testerror
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <fcntl.h>
#include <unistd.h>
#include "matchstick.h"

Test(error, error_matches1)
{
	board_t *board = malloc(sizeof(board_t));
	char *str = malloc(sizeof(char) * 2);

	str = "0";
	board->matches = 2;
	board->lines = 2;
	board->number_line = 1;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(check_error_matches(str, board) == -2);
	free(board);
}

Test(error, error_input5)
{
	board_t *board = malloc(sizeof(board_t));

	cr_redirect_stdout();
	char *argv[3] = { "./matchstick", "2a", "2" };
	cr_assert(input_error(3, argv) == 1);
}

Test(error, error_input6)
{
	board_t *board = malloc(sizeof(board_t));

	cr_redirect_stdout();
	char *argv[3] = { "./matchstick", "2", "2" };
	cr_assert(input_error(3, argv) == 0);
}

Test(error, error_matches)
{
	board_t *board = malloc(sizeof(board_t));
	char *str = malloc(sizeof(char));

	str = "2";
	board->matches = 1;
	cr_redirect_stdout();
	cr_assert(check_error_matches(str, board) == -2);
	free(board);
}

Test(error, error_line)
{
	int number_line = 0;
	char *str = "2";
	int lines = 3;

	cr_redirect_stdout();
	cr_assert(check_error_line(number_line, str, lines) > -2);
	cr_assert(check_error_line(number_line, str, 1) == -2);
}
