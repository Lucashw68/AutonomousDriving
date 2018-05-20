/*
** EPITECH PROJECT, 2017
** draw.c
** File description:
** draw.c
*/

#include "controller.h"

void draw(window_t *w)
{
	switch (w->scene) {
		case 0:
			sfRenderWindow_clear(w->window, sfBlack);
			sfRenderWindow_drawSprite(w->window,
				w->sprite[0], NULL);
			sfRenderWindow_drawSprite(w->window,
				w->sprite[1], NULL);
			sfRenderWindow_display(w->window);
		break;
		case 1:
			sfRenderWindow_clear(w->window, sfBlack);
			sfRenderWindow_drawSprite(w->window,
				w->sprite[2], NULL);
			sfRenderWindow_display(w->window);
		break;
		default:
		break;
	}
}
