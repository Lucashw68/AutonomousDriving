/*
** EPITECH PROJECT, 2017
** utils_string.c
** File description:
** utils_string.c
*/

#include "basic.h"
#include "my_printf.h"

char *my_pstrcpy(char *dest, char const *src)
{
	int i = 0;

	while (src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int my_putlenstr(char *str)
{
	int i = 0;

	while (str[i]) {
		my_putchar(str[i]);
		i++;
	}
	return (i);
}

int my_putstr_min(char *str)
{
	int i = 0;

	while (str[i]) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			my_putchar(str[i] + 32);
		else
			my_putchar(str[i]);
		i++;
	}
	return (i);
}
