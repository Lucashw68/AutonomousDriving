/*
** EPITECH PROJECT, 2017
** events.c
** File description:
** events.c
*/

#include "basic.h"
#include "controller.h"

int events(window_t *w, float fps)
{
	while (sfRenderWindow_pollEvent(w->window, &(w->event))) {
		if (w->event.type == sfEvtKeyPressed
			&& w->event.key.code == sfKeyDelete
			|| w->event.type == sfEvtClosed)
			sfRenderWindow_close(w->window);
		mouse_events(w);
		if (sfJoystick_isConnected(0)) {
			joystick_events(w, fps);
		} else
			keyboard_events(w);
	}
	return (0);
}
