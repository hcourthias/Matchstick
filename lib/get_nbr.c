/*
** EPITECH PROJECT, 2017
** get_nbr.c
** File description:
** str to int
*/

int my_getnbr(char *str)
{
	int nb;

	nb = 0;
	while (*str) {
		if (*str >= '0' && *str <= '9') {
			nb *= 10;
			nb += *str - '0';
		} else
			return (nb);

		str++;
	}
	return (nb);
}
