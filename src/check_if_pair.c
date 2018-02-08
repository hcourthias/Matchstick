/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** number of line with 1 mathches is pair or not
*/
#include "matchstick.h"

void one_is_pair(board_t *board, int where)
{
	if (board->stick[where] <= board->matches) {
		board->matches_ai = board->stick[where] - 1;
	} else
		board->matches_ai = 1;
}

void one_is_not_pair(board_t *board, int where)
{
	if (board->stick[where] <= board->matches) {
		board->matches_ai = board->stick[where];
	}
	else
		board->matches_ai = 1;
}
