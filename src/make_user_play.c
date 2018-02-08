/*
** EPITECH PROJECT, 2017
** CPE_matchstick_2017
** File description:
** user turn
*/
#include "get_next_line.h"
#include "matchstick.h"

int make_user_play(board_t *board)
{
	char *str = "";

	board->number_line = 0;
	board->number_matches = 0;
	while (str) {
		if (get_number_line(str, board) == -1)
			return (84);
		if (check_number_matches(str, board) == 84)
			return (84);
		str = (board->number_matches > 0 ? NULL : str);
		if (str == NULL)
			print_text_info(board);
	}
	board->winner = 1;
	return (0);
}


int check_number_matches(char* str, board_t *board)
{
	if (board->number_line > 0) {
		if (get_number_matches(str, board) == -1)
			return (84);
	}
	return (0);
}
