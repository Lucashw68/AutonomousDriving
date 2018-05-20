/*
** EPITECH PROJECT, 2017
** controls.c
** File description:
** controls.c
*/

#include <unistd.h>
#include <stdio.h>
#include "basic.h"
#include "controller.h"

void forward(window_t *w, float seconds)
{
	(void)seconds;

	w->c.speed += 0.1;
	write(1, FWD, my_strlen(FWD));
	dprintf(1, "%.2f", w->c.speed);
	write(1, "\n", my_strlen("\n"));
}

void brake(window_t *w, float seconds)
{
	(void)seconds;

	w->c.speed -= 0.1;
	write(1, FWD, my_strlen(FWD));
	dprintf(1, "%.2f", w->c.speed);
	write(1, "\n", my_strlen("\n"));
}

void turn_left(window_t *w, float seconds)
{
	(void)w;
	(void)seconds;
}

void turn_right(window_t *w, float seconds)
{
	(void)w;
	(void)seconds;
}

int detect_end(char *str)
{
	if (my_strcmp(str, CLEAR) == 0) {
		write(1, STOP, my_strlen(STOP));
		return (1);
	}
	return (0);
}
