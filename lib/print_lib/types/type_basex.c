/*
** EPITECH PROJECT, 2017
** type_basex.c
** File description:
** type_basex.c
*/

#include <stdlib.h>
#include "basic.h"
#include "my_printf.h"

int put_binary(state_t state, va_list args, char *str, int x)
{
	int len = 0;
	char *tmp = malloc(sizeof(char) * 64);

	tmp = my_putnbr_base(va_arg(args, long int), BIN, tmp);
	my_putstr(tmp);
	len = my_strlen(tmp);
	free(tmp);
	return (len);
}

int put_octal(state_t state, va_list args, char *str, int x)
{
	int len = 0;
	char *tmp = malloc(sizeof(char) * 64);

	tmp = my_putnbr_base(va_arg(args, long int), OCTAL, tmp);
	my_putstr(tmp);
	len = my_strlen(tmp);
	free(tmp);
	return (len);
}

int put_minhex(state_t state, va_list args, char *str, int x)
{
	int len = 0;
	char *tmp = malloc(sizeof(char) * 64);

	tmp = my_putnbr_base(va_arg(args, long int), H_MIN, tmp);
	len = my_putstr_min(tmp);
	free(tmp);
	return (len);
}

int put_majhex(state_t state, va_list args, char *str, int x)
{
	int len = 0;
	char *tmp = malloc(sizeof(char) * 64);

	tmp = my_putnbr_base(va_arg(args, long int), H_MAJ, tmp);
	my_putstr(tmp);
	len = my_strlen(tmp);
	free(tmp);
	return (len);
}
