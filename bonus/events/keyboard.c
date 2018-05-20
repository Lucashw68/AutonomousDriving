/*
** EPITECH PROJECT, 2017
** keyboard.c
** File description:
** keyboard.c
*/

#include "controller.h"

int keyboard_events(window_t *w)
{
	if (w->event.type == sfEvtKeyPressed
		&& w->event.key.code == sfKeyM)
		play_music(w);
	return (0);
}
