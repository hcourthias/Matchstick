/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** initialize structure board
*/
#include "matchstick.h"

void init_struct(board_t *board, char **argv)
{
	board->stick = NULL;
	board->lines = my_getnbr(argv[1]);
	board->matches = my_getnbr(argv[2]);
}

int *fill_tab_of_stick(board_t *board)
{
	int i = 1;

	board->stick = malloc(sizeof(int) * board->lines);
	board->stick[0] = 1;
	for (int j = 1; j < board->lines; j++) {
		i += 2;
		board->stick[j] = i;
	}
	return (0);
}
