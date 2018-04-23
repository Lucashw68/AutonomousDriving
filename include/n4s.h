/*
** EPITECH PROJECT, 2017
** n4s.h
** File description:
** n4s.h
*/

#ifndef N4S_H_
#define N4S_H_

#define START "start_simulation\n"
#define STOP "stop_simulation\n"
#define CLEAR "Track Cleared"
#define LIDAR "get_info_lidar\n"
#define FWD "car_forward:"
#define BWD "car_backward:"
#define WDIR "wheels_dir:"

typedef struct infos
{
	double left;
	double right;
	double mid;
	double speed;
} infos_t;

void go_left(infos_t *info);
void go_right(infos_t *info);

#endif /* !N4S_H_ */