/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** get input info
*/
#include "matchstick.h"

int get_number_line(char *str, board_t *board)
{
	int i = 0;

	if (board->number_line > 0)
		return (0);
	my_putstr("Line: ");
	if ((str = get_next_line(0)) == NULL) {
		free(str);
		return (-1);
	}
	for (; str[i] >= 48 && str[i] <= 57; i++);
	if (str[i] == '\0') {
		board->number_line = check_error_line(board->number_line, str,
		board->lines);
	} else {
		board->number_line = 0;
		my_putstr("Error: invalid input (positive number expected)\n");
	}
	free(str);
	return (0);
}

int get_number_matches(char *str, board_t *board)
{
	int i = 0;

	my_putstr("Matches: ");
	if ((str = get_next_line(0)) == NULL) {
		free(str);
		return (-1);
	}
	for (; str[i] >= 48 && str[i] <= 57 && str != NULL; i++);
	if (str[i] == '\0') {
		board->number_matches = check_error_matches(str, board);
		board->number_line = (board->number_matches <= 0 ? 0 :
		board->number_line);
	} else {
		board->number_matches = 0;
		board->number_line = 0;
		my_putstr("Error: invalid input (positive number expected)\n");
	}
	free(str);
	return (0);
}
