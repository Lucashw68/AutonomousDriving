/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main.c
*/

#include <unistd.h>
#include "basic.h"
#include "controller.h"

int init_window(window_t *w)
{
	w->scene = 0;
	w->button = 0;
	w->mode.width = WIDTH;
	w->mode.height = HEIGHT;
	w->mode.bitsPerPixel = 32;
	create_ressources(w);
	w->clock = sfClock_create();
	w->window = sfRenderWindow_create(w->mode,
		GAME_NAME, sfClose | sfResize, NULL);
	return ((w->window == NULL) ? 1 : 0);
}

int launch_loop(window_t *w)
{
	sfRenderWindow_setFramerateLimit(w->window, 60);
	while (sfRenderWindow_isOpen(w->window)) {
		update(w, sfClock_restart(w->clock).microseconds / 1000000.f);
		draw(w);
	}
	destroy_ressources(w);
	return (0);
}

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	window_t w;

	if (init_window(&w) == 1) {
		my_putstr("Init error");
		return (84);
	}
	launch_loop(&w);
	return (0);
}
