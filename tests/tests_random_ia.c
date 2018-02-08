/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** random
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "matchstick.h"

Test(ia, randomia)
{
	board_t *board = malloc(sizeof(board_t));

	board->matches = 3;
	board->lines = 2;
	board->line_ai = 2;
	cr_redirect_stdout();
	fill_tab_of_stick(board);
	make_ia_play_random(board);
	cr_assert(board->line_ai > 0);
}
