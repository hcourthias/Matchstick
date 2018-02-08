/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** main of the project
*/
#include "matchstick.h"

int main(int argc, char **argv)
{
	board_t *board = malloc(sizeof(board_t));

	int winner = 0;
	if (input_error(argc, argv) == 1) {
		free(board);
		return (84);
	}
	winner = matchstick(argv, board);
	free(board->stick);
	free(board);
	return (winner);
}
