/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++) ;
	return (i);
}
