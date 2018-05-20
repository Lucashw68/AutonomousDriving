/*
** EPITECH PROJECT, 2017
** axis.c
** File description:
** axis.c
*/

#include <stdio.h>
#include <unistd.h>
#include "basic.h"
#include "controller.h"

void handle_axis_x(float x)
{
	static float dir = 0;

	if (x == 100) {
		dir += 0.10;
	} else if (x == -100) {
		dir -= 0.1;
	} else
		dir = 0;
	write(1, WDIR, my_strlen(WDIR));
	dprintf(1, "%.2f", dir);
	write(1, "\n", my_strlen("\n"));
}

void handle_axis_y(float y)
{
	(void)y;
}
