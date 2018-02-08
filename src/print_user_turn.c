/*
** EPITECH PROJECT, 2017
** CPE_matchstick_2017
** File description:
** print all the stuff related to ia turn
*/
#include "matchstick.h"

void print_updated_board_game(board_t *board)
{
	int space = board->lines - 1;

	board->stick[board->number_line - 1] -= board->number_matches;
	print_window_of_board(board->lines);
	for (int j = 0; j < board->lines; j++, space -= 1) {
		my_putchar('*');
		for (int i = 0; i != space; i++)
			my_putchar(' ');
		for (int counter = 0; counter != board->stick[j]; counter++)
			my_putchar('|');
		for (int temp = space + board->stick[j];
		temp < (board->lines * 2 - 1); temp++)
			my_putchar(' ');
		my_putstr("*\n");
	}
	print_window_of_board(board->lines);
}

void print_text_info(board_t *board)
{
	my_putstr("Player removed ");
	my_put_nbr(board->number_matches);
	my_putstr(" match(es) from line ");
	my_put_nbr(board->number_line);
	my_putchar('\n');
	print_updated_board_game(board);
}
