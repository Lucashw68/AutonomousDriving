/*
** EPITECH PROJECT, 2017
** set.c
** File description:
** set.c
*/

#include "controller.h"

int load_textures(window_t *w)
{
	int nb = 0;

	w->texture[nb++] =
		sfTexture_createFromFile("./res/background.png", NULL);
	w->texture[nb++] = sfTexture_createFromFile("./res/play.png", NULL);
	w->texture[nb++] = sfTexture_createFromFile("./res/snes.png", NULL);
	set_textures(w, nb);
	return (nb);
}

void set_textures(window_t *w, int nb)
{
	for (int i = 0; i != nb; i++)
		sfSprite_setTexture(w->sprite[i], w->texture[i], sfTrue);
}

void set_position(window_t *w, int nb)
{
	int i;

	for (i = 0; i != nb; i++) {
		w->pos[i]->x = 0;
		w->pos[i]->y = 0;
		confirm_position(w, i);
	}
	for (i = 1; i != nb; i++) {
		w->pos[i]->x = (WIDTH / 2 -
			(sfSprite_getGlobalBounds(w->sprite[i]).width / 2));
		w->pos[i]->y = (HEIGHT / 2 -
			(sfSprite_getGlobalBounds(w->sprite[i]).height / 2));
		confirm_position(w, i);
	}
}

void confirm_position(window_t *w, int index)
{
	sfSprite_setPosition(w->sprite[index], *w->pos[index]);
}
