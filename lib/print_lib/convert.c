/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf
*/

#include <unistd.h>
#include <stdlib.h>
#include "basic.h"
#include "my_printf.h"

char *my_putnbr_base(long int nbr, char *base_to, char *result)
{
	int i = 0;
	int neg = 0;
	int base = my_strlen(base_to);

	if (nbr < 0) {
		neg = 1;
		nbr *= -1;
	}
	for (i = 0; nbr != 0; i++) {
		if ((nbr % base) < 10)
			result[i] = (nbr % base) + 48;
		else
			result[i] = (nbr % base) + 55;
		nbr = nbr / base;
	}
	if (neg)
		result[i++] = '-';
	result[i] = '\0';
	return ((!i) ? my_pstrcpy(result, "0") : (result = my_rev_str(result)));
}

char *my_putnbr_int_base(long int nbr, char *base_to, char *result)
{
	int i = 0;
	int neg = 0;
	int base = my_strlen(base_to);

	if ((int)nbr < 0) {
		neg = 1;
		nbr = (int)nbr * -1;
	}
	for (i = 0; ((int)nbr != 0); i++) {
		if (((int)nbr % base) < 10)
			result[i] = ((int)nbr % base) + 48;
		else
			result[i] = ((int)nbr % base) + 55;
		nbr = (int)nbr / base;
	}
	if (neg)
		result[i++] = '-';
	result[i] = '\0';
	return ((!i) ? my_pstrcpy(result, "0") : (result = my_rev_str(result)));
}

char *my_putnbr_float(long int nbr, char *base_to)
{
	int i = 0;
	int neg = 0;
	int base = my_strlen(base_to);
	char *result = malloc(sizeof(char) * 64);

	if (nbr < 0) {
		neg = 1;
		nbr *= -1;
	}
	for (i = 0; nbr != 0; i++) {
		if ((nbr % base) < 10)
			result[i] = (nbr % base) + 48;
		else
			result[i] = (nbr % base) + 55;
		nbr = nbr / base;
	}
	if (neg)
		result[i++] = '-';
	result[i] = '\0';
	return ((!i) ? my_pstrcpy(result, "0") : (result = my_rev_str(result)));
}
