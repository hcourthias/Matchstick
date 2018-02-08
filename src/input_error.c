/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** error handling to return 84 when bad input
*/
#include "matchstick.h"

void print_text_error(board_t *board)
{
	my_putstr("Error: you cannot remove more than ");
	my_putchar(board->matches + 48);
	my_putstr(" matches per turn\n");
}

int input_error(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc != 3)
		return (1);
	for (; argv[1][i] >= 48 && argv[1][i] <= 57; i++);
	for (; argv[2][j] >= 48 && argv[2][j] <= 57; j++);
	if (argv[1][i] != '\0' || argv[2][j] != '\0')
		return (1);

	return (0);
}

int check_error_matches(char *str, board_t *board)
{
	board->number_matches = my_getnbr(str);
	if (board->matches < board->number_matches) {
		print_text_error(board);
		return (-2);
	}
	if (board->stick[board->number_line - 1] < board->number_matches) {
		board->number_matches = 0;
		my_putstr("Error: not enough matches on this line\n");
		return (0);
	}
	if (board->number_matches == 0) {
		my_putstr("Error: you have to remove at least one match\n");
		return (-2);
	}
	return (board->number_matches);
}

int check_error_line(int number_line, char *str, int lines)
{
	number_line = my_getnbr(str);
	if (number_line > lines || number_line <= 0) {
		my_putstr("Error: this line is out of range\n");
		return (-2);
	}
	return (number_line);
}
