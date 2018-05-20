/*
** EPITECH PROJECT, 2017
** music.c
** File description:
** music.c
*/

#include "controller.h"

void play_music(window_t *w)
{
	static int limit = 0;
	if (limit != 0 || (w->dejavu = sfMusic_createFromFile(DEJAVU)) == NULL)
		return;
	sfMusic_setLoop(w->dejavu, sfTrue);
	sfMusic_play(w->dejavu);
	if (limit == 0)
		limit++;
}
