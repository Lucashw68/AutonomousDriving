/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** my_put_nbr.c
*/

#include <unistd.h>
#include "basic.h"
#include "my_printf.h"

void my_put_nbr(int nb)
{
	if (nb < 0) {
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb > 9) {
		my_put_nbr(nb / 10);
		my_putchar(nb % 10 + '0');
	}
	else
		my_putchar(nb + '0');
}
