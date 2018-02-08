/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** gameloop
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "matchstick.h"

Test(bonus, gameloopbonus)
{
	FILE *f_stdin = cr_get_redirected_stdin();
	board_t *board = malloc(sizeof(board_t));
	char *argv[3] = {"./matchstick", "1", "2"};

	cr_redirect_stdout();
	fprintf(f_stdin, "");
	fclose(f_stdin);
	cr_assert(matchstick_bonus(argv, board) == 84);
}

Test(bonus, gameloop1bonus)
{
	FILE *f_stdin = cr_get_redirected_stdin();
	board_t *board = malloc(sizeof(board_t));
	char *argv[3] = {"./matchstick", "2", "3"};

	cr_redirect_stdout();
	fprintf(f_stdin, "2\n3\n1\n1\n");
	fclose(f_stdin);
	cr_assert(matchstick_bonus(argv, board) == 1);
}

Test(bonus, gameloop2bonus)
{
	FILE *f_stdin = cr_get_redirected_stdin();
	board_t *board = malloc(sizeof(board_t));
	char *argv[3] = {"./matchstick", "2", "2"};

	cr_redirect_stdout();
	fprintf(f_stdin, "");
	fclose(f_stdin);
	cr_assert(matchstick_bonus(argv, board) == 0);
}

Test(bonus, gameloop3bonus)
{
	FILE *f_stdin = cr_get_redirected_stdin();
	board_t *board = malloc(sizeof(board_t));
	char *argv[3] = {"./matchstick", "2", "3"};

	cr_redirect_stdout();
	fprintf(f_stdin, "1\n1\n2\n2\n2\n1\n");
	fclose(f_stdin);
	cr_assert(matchstick_bonus(argv, board) == 2);
}
