/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** check if there is a winner
*/
#include "matchstick.h"

int check_winner(board_t *board)
{
	int temp = 0;

	for (int i = 0; i < board->lines; i++) {
		if (board->stick[i] != 0)
			temp++;
	}
	if (temp == 0) {
		if (board->winner == 1) {
			my_putstr("You lost, too bad...\n");
			return (2);
		} else {
			my_putstr("I lost... snif... but");
			my_putstr("I'll get you next time!!\n");
			return (1);
		}
	} else
		my_putchar('\n');
	return (0);
}
