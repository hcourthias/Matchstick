/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** ia turn random
*/

#include "matchstick.h"

int random_line(board_t *board)
{
	int lines = rand() % board->lines + 1;
	if (board->stick[lines - 1] == 0)
		random_line(board);
	else
		board->line_ai = lines;
	return (0);
}

int random_matches(board_t *board)
{
	int matches;

	if (board->stick[board->line_ai - 1] == 1) {
		board->matches_ai = board->stick[board->line_ai - 1];
	} else {
		matches = rand() % board->stick[board->line_ai - 1] + 1;
		if (matches == 0 || board->matches < matches)
			random_matches(board);
		else if (board->stick[board->line_ai - 1] - matches == 0)
				board->matches_ai = matches - 1;
		else
			board->matches_ai = matches;
	}
	return (0);
}

void make_ia_play_random(board_t *board)
{
	random_line(board);
	random_matches(board);
	print_text_info_ia(board);
}
