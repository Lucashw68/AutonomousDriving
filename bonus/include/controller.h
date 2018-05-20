/*
** EPITECH PROJECT, 2017
** controller.h
** File description:
** controller.h
*/

#ifndef CONTROLLER_H_
	#define CONTROLLER_H_

	#define GAME_NAME "Need4Stek"
	#define WIDTH 600
	#define HEIGHT 337
	#define CREATE 3
	#define DEJAVU "res/dejavu.ogg"
	#define BEGIN "start_simulation\n"
	#define STOP "stop_simulation\n"
	#define CLEAR "Track Cleared"
	#define LIDAR "get_info_lidar\n"
	#define FWD "car_forward:"
	#define BWD "car_backward:"
	#define WDIR "wheels_dir:"

#include <SFML/Audio.h>
#include <SFML/Graphics.h>

typedef enum {
	X, A, B, Y, L, R, SELECT = 8, START = 9
} button;

typedef struct controls {
	float speed;
	float dir;
} controls_t;

typedef struct window {
	sfVideoMode mode;
	sfRenderWindow *window;
	sfEvent event;
	sfClock *clock;
	sfTexture **texture;
	sfSprite **sprite;
	sfVector2f **pos;
	sfMusic *dejavu;
	controls_t c;
	char button;
	int scene;
} window_t;

int events(window_t *w, float fps);
int hit_box(window_t *w, sfVector2i m, int s);
void create_ressources(window_t *w);
void update(window_t *w, float fps);
int whos_pressed(window_t *w);
char set_bit(char data, int size, int index, int value);
int get_bit(char x, int index);
void play_music(window_t *w);
void handle_xaby(window_t *w);
void handle_others(window_t *w);
void handle_axis_x(float x);
void handle_axis_y(float y);
void draw(window_t *w);

/* Controls */
void handle_axis_x(float x);
void apply_actions(window_t *w, float fps);
void forward(window_t *w, float seconds);
void brake(window_t *w, float seconds);
void turn_left(window_t *w, float seconds);
void turn_right(window_t *w, float seconds);

#endif /* !CONTROLLER_H_ */
