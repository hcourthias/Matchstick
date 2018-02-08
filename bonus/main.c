/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** main of the project
*/
#include "matchstick.h"

void print_round_logo(board_t *board)
{
	my_putstr("\n**********\n*Round: ");
	my_put_nbr(board->round);
	my_putstr("*\n**********\n");
}

void print_score(int score1, int score2)
{
	my_putstr("\nPlayer 1\t");
	my_put_nbr(score1);
	my_putstr("-");
	my_put_nbr(score2);
	my_putstr("\tPlayer 2\n");
}


void print_winner(int winner)
{
	if (winner == 1)
		my_putstr("Player 1 won !\n");
	else
		my_putstr("Player 2 won !\n");
}

int main(int argc, char **argv)
{
	board_t *board = malloc(sizeof(board_t));
	int winner = 0;
	int score[2] = {0, 0};
	board->round = 1;

	if (input_error(argc, argv) == 1)
		return (84);
	while (board->round != 6) {
		print_round_logo(board);
		winner = matchstick_bonus(argv, board);
		if (winner == 1)
			score[0]++;
		else
			score[1]++;
		print_score(score[0], score[1]);
	}
	print_winner(winner);
	free(board->stick);
	free(board);
	return (winner);
}
