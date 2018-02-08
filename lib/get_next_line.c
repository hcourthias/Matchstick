/*
** EPITECH PROJECT, 2017
** get_next_line.c
** File description:
** read line per line
*/
#include "get_next_line.h"
#include "matchstick.h"

char *re_alloc(char *str)
{
	int i = 0;
	char *newalloc = malloc(sizeof(char) * (my_strlen(str) + 2));

	if (newalloc == NULL) {
		return (NULL);
	}
	for (; i <= my_strlen(str); i++) {
		newalloc[i] = str[i];
	}
	if (str[0] != '\0')
		free(str);
	newalloc[i] = '\0';
	return (newalloc);
}

char *get_next_line(int fd)
{
	char *str = "\0";
	static char buffer[READ_SIZE];
	static int i = 0;
	static int limit = 0;

	for (int j = 0; 1; i++, j++) {
		str = re_alloc(str);
		if (i >= limit) {
			if ((limit = read(fd, buffer, READ_SIZE)) < 0)
				return (NULL);
			i = 0;
		}
		if (limit == 0)
			return (NULL);
		if (buffer[i] == '\n') {
			i++;
			return (str);
		}
		str[j] = buffer[i];
	}
}
