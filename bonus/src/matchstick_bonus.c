/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** game loop
*/
#include "matchstick.h"

int matchstick_bonus(char **argv, board_t *board)
{
	init_struct(board, argv);
	board->round++;
	if (board->lines <= 1 || board->lines > 99 || board->matches <= 0)
		return (84);
	fill_tab_of_stick(board);
	print_game_board(board->lines);
	while (1) {
		my_putstr("Player 1:\n");
		if (make_user_play(board) == 84)
			return (0);
		if (check_winner_bonus(board) > 0)
			return (2);
		my_putstr("Player 2:\n");
		board->winner = 1;
		if (make_user_play(board) == 84)
			return (0);
		if (check_winner_bonus(board) > 0)
			return (1);
	}
	return (0);
}
