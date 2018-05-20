/*
** EPITECH PROJECT, 2017
** joystick.c
** File description:
** joystick.c
*/

#include "controller.h"

int joystick_events(window_t *w, float fps)
{
	handle_xaby(w);
	handle_others(w);
	handle_axis(w);
	apply_actions(w, fps);
	return (0);
}

void apply_actions(window_t *w, float fps)
{
	void (*actions[5])(window_t *w, float fps);

	actions[0] = &forward;
	actions[1] = &brake;
	actions[2] = &turn_left;
	actions[3] = &turn_right;
	actions[4] = NULL;

	for (int i = 0; i != 4; i++) {
		if (get_bit(w->button, i))
			actions[i](w, fps);
	}
	if (get_bit(w->button, (START - 2))) {
		write(1, BEGIN, my_strlen(BEGIN));
	}
}

void handle_axis(window_t *w)
{
	handle_axis_x(sfJoystick_getAxisPosition(0, sfJoystickX));
	handle_axis_y(sfJoystick_getAxisPosition(0, sfJoystickY));
}

int whos_pressed(window_t *w)
{
	int b_xaby = 0;
	int b_other = 0;

	b_xaby = button_xaby(w);
	b_other = other_button(w);
	if (b_xaby == -1 && b_other == -1)
		return (-1);
	else if (b_xaby > -1 && b_other == -1)
		return (b_xaby);
	else if (b_xaby == -1 && b_other > -1)
		return (b_other);
	return (-1);
}
