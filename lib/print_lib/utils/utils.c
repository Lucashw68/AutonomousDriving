/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf
*/

#include <unistd.h>
#include <stdlib.h>
#include "basic.h"
#include "../my_printf.h"

char *my_rev_str(char *str)
{
	int i = 0;
	int j = 0;
	char *new = malloc(sizeof(char) * my_strlen(str) + 1);

	while (str[i])
		i++;
	while (i-- != 0) {
		new[j] = str[i];
		j++;
	}
	new[j] = '\0';
	free(str);
	return (new);
}
