/*
** EPITECH PROJECT, 2017
** type_unusual.c
** File description:
** type_unusual.c
*/

#include <stdlib.h>
#include "basic.h"
#include "my_printf.h"

int put_uint(state_t state, va_list args, char *str, int x)
{
	int len = 0;
	char *tmp = malloc(sizeof(char) * 64);

	tmp = my_putnbr_base(va_arg(args, long int), BASE_10, tmp);
	my_putstr(tmp);
	len = my_strlen(tmp);
	free(tmp);
	return (len);
}

int put_percent(state_t state, va_list args, char *str, int x)
{
	if (str[x] == '%' || str[x - 1] == '%')
		my_putchar('%');
	if (str[x] == '%' && str[x - 1] == '%')
		my_putchar('%');
	if (str[x] == '%' && str[x - 1] == '%' && str[x - 2] == '%')
		my_putchar('%');
	return (1);
}
