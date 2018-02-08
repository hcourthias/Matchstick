/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** putchar
*/
#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}
