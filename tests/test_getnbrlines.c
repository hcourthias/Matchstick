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

Test(gnl, get_number_line)
{
	FILE *f_stdin = cr_get_redirected_stdin();
	board_t *board = malloc(sizeof(board_t));

	cr_redirect_stdout();
	board->matches = 2;
	board->lines = 2;
	board->number_line = 0;
	fprintf(f_stdin, "4\n");
	fclose(f_stdin);
	get_number_line("", board);
	cr_assert(board->number_line = -2);
}

Test(gnl, get_number_line2)
{
	FILE *f_stdin = cr_get_redirected_stdin();
	board_t *board = malloc(sizeof(board_t));

	cr_redirect_stdout();
	board->matches = 2;
	board->lines = 2;
	board->number_line = 2;
	fprintf(f_stdin, "4\n");
	fclose(f_stdin);
	cr_assert(get_number_line("", board) == 0);
}

Test(gnl, get_number_line3)
{
	FILE *f_stdin = cr_get_redirected_stdin();
	board_t *board = malloc(sizeof(board_t));

	cr_redirect_stdout();
	board->matches = 2;
	board->lines = 2;
	board->number_line = 0;
	fprintf(f_stdin, "");
	fclose(f_stdin);
	cr_assert(get_number_line("", board) == -1);
}

Test(gnl, get_number_line4)
{
	FILE *f_stdin = cr_get_redirected_stdin();
	board_t *board = malloc(sizeof(board_t));

	cr_redirect_stdout();
	board->matches = 2;
	board->lines = 2;
	board->number_line = 0;
	fprintf(f_stdin, "4\n");
	fclose(f_stdin);
	cr_assert(get_number_line("", board) == 0);
}

Test(gnl, get_number_line5)
{
	FILE *f_stdin = cr_get_redirected_stdin();
	board_t *board = malloc(sizeof(board_t));

	cr_redirect_stdout();
	board->matches = 2;
	board->lines = 2;
	board->number_line = 0;
	fprintf(f_stdin, "sdfg\n");
	fclose(f_stdin);
	cr_assert(get_number_line("", board) == 0);
}
