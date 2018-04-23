/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include <stdlib.h>
#include "basic.h"
#include "my_printf.h"

void create_type_ptr(int (*type[13])(state_t, va_list, char *, int tmp))
{
	type[0] = &put_int;
	type[1] = &put_int;
	type[2] = &put_uint;
	type[3] = &put_str;
	type[4] = &put_char;
	type[5] = &put_binary;
	type[6] = &put_minhex;
	type[7] = &put_majhex;
	type[8] = &put_octal;
	type[9] = &put_ptr;
	type[10] = &put_float;
	type[11] = &put_percent;
	type[12] = NULL;
}

int check_specifier(va_list args, char *str, int *i, int *len)
{
	state_t state;

	int x = 0;
	int tmp = *i;
	char *types = malloc(sizeof(char) * 13);

	types = my_pstrcpy(types, "diuscbxXopf%");
	int (*type[13])(state_t state, va_list args, char *str, int tmp);

	create_type_ptr(type);
	while (types[x] && str[*i] != types[x])
		x++;
	if (x == 12)
		return (*len);
	*len += type[x](state, args, str, tmp);
	free(types);
	return (*len);
}
