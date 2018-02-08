/*
** EPITECH PROJECT, 2017
** Piscine map.h
** File description:
** board.h
*/

#ifndef MAP_H
#define MAP_H

typedef struct board
{
	int *stick;
	int matches;
	int winner;
	int lines;
	int number_line;
	int number_matches;
	int line_ai;
	int matches_ai;
	int round;
}board_t;

#endif
