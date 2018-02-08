/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** win the final_round
*/
#include "matchstick.h"

int final_round(board_t *board)
{
	int one = 0;
	int big = 0;
	int where = 0;

	for (int i = 0; i <= (board->lines - 1); i++) {
		if (board->stick[i] == 1)
			one++;
		if (board->stick[i] > 1) {
			big++;
			where = i;
		}
	}
	if (find_final_solution(board, big, where, one) == 2)
		return (2);
	return (0);
}

int find_final_solution(board_t *board, int big, int where, int one)
{
	if (big == 1) {
		board->line_ai = where + 1;
		if (my_is_pair(one) == 0)
			one_is_pair(board, where);
		else
			one_is_not_pair(board, where);
		return (2);
	}
	return (0);
}
