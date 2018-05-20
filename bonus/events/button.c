/*
** EPITECH PROJECT, 2017
** button.c
** File description:
** button.c
*/

#include "controller.h"

void handle_xaby(window_t *w)
{
	for (int i = 0; i != 4; i++)
		w->button = set_bit(w->button, 1, i, 0);
	switch (whos_pressed(w)) {
		case 0:
			w->button = set_bit(w->button, 1, X, 1);
		break;
		case 1:
			w->button = set_bit(w->button, 1, A, 1);
		break;
		case 2:
			w->button = set_bit(w->button, 1, B, 1);
		break;
		case 3:
			w->button = set_bit(w->button, 1, Y, 1);
		break;
	}
}

void handle_others(window_t *w)
{
	w->button = set_bit(w->button, 1, 4, 0);
	w->button = set_bit(w->button, 1, 5, 0);
	w->button = set_bit(w->button, 1, 6, 0);
	w->button = set_bit(w->button, 1, 7, 0);
	switch (whos_pressed(w)) {
		case 4:
			w->button = set_bit(w->button, 1, L, 1);
		break;
		case 5:
			w->button = set_bit(w->button, 1, R, 1);
		break;
		case 8:
			w->button = set_bit(w->button, 1, (SELECT - 2), 1);
			w->scene = 0;
		break;
		case 9:
			w->button = set_bit(w->button, 1, (START - 2), 1);
			w->scene = 1;
		break;
	}
}

int button_xaby(window_t *w)
{
	if ((w->event.type == sfEvtJoystickButtonPressed) &&
	sfJoystick_isButtonPressed(0, 0))
		return (0);
	if ((w->event.type == sfEvtJoystickButtonPressed) &&
	sfJoystick_isButtonPressed(0, 1))
		return (1);
	if ((w->event.type == sfEvtJoystickButtonPressed) &&
	sfJoystick_isButtonPressed(0, 2))
		return (2);
	if ((w->event.type == sfEvtJoystickButtonPressed) &&
	sfJoystick_isButtonPressed(0, 3))
		return (3);
	return (-1);
}

int other_button(window_t *w)
{
	if ((w->event.type == sfEvtJoystickButtonPressed) &&
	sfJoystick_isButtonPressed(0, 4))
		return (4);
	if ((w->event.type == sfEvtJoystickButtonPressed) &&
	sfJoystick_isButtonPressed(0, 5))
		return (5);
	if ((w->event.type == sfEvtJoystickButtonPressed) &&
	sfJoystick_isButtonPressed(0, 8))
		return (8);
	if ((w->event.type == sfEvtJoystickButtonPressed) &&
	sfJoystick_isButtonPressed(0, 9))
		return (9);
	return (-1);
}
