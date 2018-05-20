/*
** EPITECH PROJECT, 2017
** mouse.c
** File description:
** mouse.c
*/

#include "controller.h"

int mouse_events(window_t *w)
{
	sfVector2i mouse;

	mouse = sfMouse_getPosition(w->window);
	if (w->scene == 0 && hit_box(w, mouse, 1)
	&& w->event.type == sfEvtMouseButtonPressed)
		w->scene = 1;
	return (0);
}

int hit_box(window_t *w, sfVector2i m, int s)
{
	if (m.x - w->pos[s]->x >= 0 && m.x - w->pos[s]->x
		< sfSprite_getGlobalBounds(w->sprite[s]).width
		&& m.y - w->pos[s]->y >= 0 && m.y - w->pos[s]->y
		< sfSprite_getGlobalBounds(w->sprite[s]).height) {
		return (1);
	}
	return (0);
}
