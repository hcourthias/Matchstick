/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** __DESCRIPTION__
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>
#include <ctype.h>
#include "matchstick.h"

Test(gnl, get_number_matches)
{
	FILE *f_stdin = cr_get_redirected_stdin();
	board_t *board = malloc(sizeof(board_t));

	cr_redirect_stdout();
	board->matches = 2;
	board->lines = 2;
	board->number_line = 0;
	fprintf(f_stdin, "");
	fclose(f_stdin);
	get_number_matches("", board);
	cr_assert(board->number_line = -1);
}

Test(gnl, get_number_matches2)
{
	FILE *f_stdin = cr_get_redirected_stdin();
	board_t *board = malloc(sizeof(board_t));

	cr_redirect_stdout();
	board->matches = 2;
	board->lines = 2;
	board->number_line = 0;
	fprintf(f_stdin, "sdfg\n");
	fclose(f_stdin);
	cr_assert(get_number_matches("", board) == 0);
}

Test(gnl, get_number_matches3)
{
	FILE *f_stdin = cr_get_redirected_stdin();
	board_t *board = malloc(sizeof(board_t));

	cr_redirect_stdout();
	board->matches = 2;
	board->lines = 2;
	board->number_line = 0;
	fill_tab_of_stick(board);
	fprintf(f_stdin, "1\n");
	fclose(f_stdin);
	cr_assert(get_number_matches("", board) == 0);
}
