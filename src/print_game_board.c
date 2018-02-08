/*
** EPITECH PROJECT, 2017
** CPE_matchstick_2017
** File description:
** print game board
*/
#include "matchstick.h"

void print_window_of_board(int line)
{
	for (int i = 0; i < (line * 2) + 1; i++)
		my_putchar('*');
	my_putchar('\n');
}

void print_game_board(int lines)
{
	int stick = 1;
	int space = lines - 1;

	for (int i = 0; i < (lines * 2) + 1; i++)
		my_putchar('*');
	my_putchar('\n');
	for (int j = 0; j < lines; j++, space -= 1, stick += 2) {
		my_putchar('*');
		for (int i = 0; i != space; i++)
			my_putchar(' ');
		for (int counter = 0; counter != stick; counter++)
			my_putchar('|');
		for (int i = 0; i != space; i++)
			my_putchar(' ');
		my_putchar('*');
		my_putchar('\n');
	}
	for (int i = 0; i < (lines * 2) + 1; i++)
		my_putchar('*');
	my_putstr("\n\n");
}
