/*
** EPITECH PROJECT, 2017
** type_usual.c
** File description:
** type_usual.c
*/

#include <stdlib.h>
#include <stdarg.h>
#include "basic.h"
#include "../my_printf.h"

int put_int(state_t state, va_list args, char *str, int x)
{
	int len = 0;
	char *tmp = malloc(sizeof(char) * 64);

	tmp = my_putnbr_int_base(va_arg(args, long int), "0123456789", tmp);
	my_putstr(tmp);
	len = my_strlen(tmp);
	free(tmp);
	return (len);
}

int put_char(state_t state, va_list args, char *str, int x)
{
	my_putchar(va_arg(args, int));
	return (1);
}

int put_str(state_t state, va_list args, char *str, int x)
{
	return (my_putlenstr(va_arg(args, char*)));
}

int put_ptr(state_t state, va_list args, char *str, int x)
{
	int len = 0;
	char *tmp = malloc(sizeof(char) * 64);

	my_putstr("0x");
	tmp = my_putnbr_base(va_arg(args, long int), H_MIN, tmp);
	my_putstr_min(tmp);
	len = my_strlen(tmp);
	free(tmp);
	return (len + 2);
}

int put_float(state_t state, va_list args, char *str, int x)
{
	int len = 0;
	int back = 0;
	int forward = 0;
	double d_arg = va_arg(args, double);
	long int unit = (int)d_arg;
	long int mantissa = (int)d_arg;
	char *tmp;

	mantissa == (long int)d_arg ? d_arg *= 1000000 : mantissa;
	mantissa = (long int)d_arg;
	back = forward = my_strlen(tmp = my_putnbr_float(unit, BASE_10));
	free(tmp);
	len = my_strlen(tmp = my_putnbr_float(mantissa, BASE_10));
	while (forward-- != 0)
		*tmp++;
	my_printf("%d.%s", unit, tmp);
	while (back-- != 0)
		*tmp--;
	free(tmp);
	return (len);
}
