/*
** EPITECH PROJECT, 2017
** bits.c
** File description:
** bits.c
*/

#include <stdio.h>
#include "controller.h"

void show_bits_char(char x)
{
	int i = (sizeof(char) * 8) - 1;

	for (;i >= 0; i--) {
		(x & (1 << i)) ? putchar('1') : putchar('0');
	}
	putchar('\n');
}

char set_bit(char data, int size, int index, int value)
{
	(void)size;
	char a;
	char b = (char)data;
	char c;

	if (value) {
		a = (1u << index);
		c = a | b;
	} else {
		a = ~(1u << index);
		c = a & b;
	}
	data = c;
	return (data);
}

int get_bit(char x, int index)
{
	if ((x & (1 << index)))
		return (1);
	return (0);
}
