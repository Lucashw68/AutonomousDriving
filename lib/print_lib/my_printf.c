/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf
*/

#include <unistd.h>
#include <stdarg.h>
#include "my_printf.h"

int my_printf(char *str, ...)
{
	va_list args;
	int len = 0;
	int i = 0;

	va_start(args, str);
	while (str[i]) {
		if (str[i - 1] == '%') {
			check_specifier(args, str, &i, &len);
		}
		else if (str[i] != '%') {
			write(1, &str[i], 1);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
