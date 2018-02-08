/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** ia hard
*/
#include "matchstick.h"

int xor(board_t *board)
{
	int sum = 0;

	for (int i = 0; i <= (board->lines - 1); i++) {
		sum ^= board->stick[i];
	}
	return (sum);
}

int make_ia_hard_play(board_t *board)
{
	int j = 1;

	if (final_round(board) == 2)
		j = 0;
	for (int i = 0; i <= (board->lines - 1) && j == 1; i++) {
		if (find_a_solution(board, i) == 2) {
			j = 0;
		}
	}
	if (j == 1) {
		make_ia_play_random(board);
		return (0);
	}
	board->winner = 2;
	print_text_info_ia(board);
	return (0);
}

int find_a_solution(board_t *board, int i)
{
	int j = 1;

	if (board->stick[i] == 0)
		return (1);
	for (; j <= board->stick[i] && j <= board->matches; j++) {
		board->stick[i] -= j;
		if (xor(board) == 0) {
			board->stick[i] += j;
			board->line_ai = i + 1;
			board->matches_ai = j;
			return (2);
		}
		board->stick[i] += j;
	}
	return (0);
}
