/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** my_putstr
*/
void my_putchar(char c);

int my_putstr(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
	return (0);
}
