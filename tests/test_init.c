/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** test init struct
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "matchstick.h"

Test(struc, fill_tab_of_stick)
{
	board_t *board = malloc(sizeof(board_t));

	board->number_matches = 2;
	board->lines = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	cr_assert(board->stick[1] == 3);
}

Test(struc, init)
{
	board_t *board = malloc(sizeof(board_t));
	char *argv[3] = { "./matchstick", "2", "2" };

	init_struct(board, argv);
	cr_assert(board->matches == 2);
}
