/*
** EPITECH PROJECT, 2017
** destroy.c
** File description:
** destroy.c
*/

#include "controller.h"

void destroy_ressources(window_t *w)
{
	for (int i = 0; i != CREATE; i++) {
		sfSprite_destroy(w->sprite[i]);
	}
	sfTexture_destroy(w->texture[0]);
}
