/*
** EPITECH PROJECT, 2017
** flags.c
** File description:
** flags.c
*/

#include <stdlib.h>

int is_flag(char x)
{
	return (x == '#' || x == ' ' || x == '-' || x == '+' ? 1 : 0);
}

char *which_flag(char *str, int *i)
{
	int c = 0;
	int tmp = *i;
	char *flag = malloc(sizeof(char) * 5);

	if (is_flag(str[tmp])) {
		while (is_flag(str[tmp])) {
			flag[c] = str[tmp];
			tmp++;
			c++;
		}
		flag[c] = '\0';
	}
	else {
		return (NULL);
	}
	*i += tmp;
	return (flag);
}
