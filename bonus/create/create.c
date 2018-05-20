/*
** EPITECH PROJECT, 2017
** create.c
** File description:
** create.c
*/

#include "controller.h"

void create_ressources(window_t *w)
{
	int nb = 0;

	create_sprite(w, CREATE);
	create_texture(w, CREATE);
	create_position(w, CREATE);
	nb = load_textures(w);
	set_position(w, nb);
}

void create_sprite(window_t *w, int nb)
{
	int i = 0;

	w->sprite = malloc(sizeof(sfSprite*) * nb);
	while (i != nb) {
		w->sprite[i] = sfSprite_create();
		i++;
	}
}

void create_texture(window_t *w, int nb)
{
	w->texture = malloc(sizeof(sfTexture*) * nb);
}

void create_position(window_t *w, int nb)
{
	int i = 0;

	w->pos = malloc(sizeof(sfVector2f*) * nb);
	while (i != nb) {
		w->pos[i] = malloc(sizeof(sfVector2f));
		i++;
	}
}
