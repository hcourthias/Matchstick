/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** test init struct
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "matchstick.h"

Test(user, userplay)
{
	FILE *f_stdin = cr_get_redirected_stdin();
	board_t *board = malloc(sizeof(board_t));

	cr_redirect_stdout();
	board->matches = 2;
	board->lines = 2;
	board->number_line = 0;
	fprintf(f_stdin, "");
	fclose(f_stdin);
	cr_assert(make_user_play(board) == 84);
}

Test(user, checkerrormatches1)
{
	FILE *f_stdin = cr_get_redirected_stdin();
	board_t *board = malloc(sizeof(board_t));

	cr_redirect_stdout();
	board->matches = 2;
	board->lines = 2;
	board->number_line = 1;
	fprintf(f_stdin, "");
	fclose(f_stdin);
	cr_assert(check_number_matches("", board) == 84);
}

Test(user, userplay1)
{
	FILE *f_stdin = cr_get_redirected_stdin();

	cr_redirect_stdout();
	board_t *board = malloc(sizeof(board_t));
	board->matches = 2;
	board->lines = 2;
	board->number_line = 1;
	fprintf(f_stdin, "");
	fclose(f_stdin);
	cr_assert(make_user_play(board) == 84);
}

Test(user, userplay2)
{
	FILE *f_stdin = cr_get_redirected_stdin();

	cr_redirect_stdout();
	board_t *board = malloc(sizeof(board_t));
	board->matches = 2;
	board->lines = 2;
	board->number_line = 0;
	fprintf(f_stdin, "1\n");
	fclose(f_stdin);
	cr_assert(make_user_play(board) == 84);
}

Test(user, userplay3)
{
	FILE *f_stdin = cr_get_redirected_stdin();

	cr_redirect_stdout();
	board_t *board = malloc(sizeof(board_t));
	board->matches = 2;
	board->lines = 2;
	board->number_line = 0;
	fill_tab_of_stick(board);
	fprintf(f_stdin, "1\n1\n");
	fclose(f_stdin);
	cr_assert(make_user_play(board) == 0);
}
