/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf
*/

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_

#include <stdarg.h>

#define BIN "01"
#define OCTAL "01234567"
#define BASE_10 "0123456789"
#define H_MIN "0123456789abcdef"
#define H_MAJ "0123456789ABCDEF"

typedef struct flags
{
	char mask;
} flags_t;

typedef struct width
{
	int n;
	int On;
	int star;
	char *width;
} width_t;

typedef struct precision
{
	int none;
	int dotO;
	int dotN;
	int star;
	char *precision;
} precision_t;

typedef struct modifier
{
	int h;
	int l;
	int L;
	char *modifier;
} modifier_t;

typedef struct specifier_state
{
	flags_t flags;
	width_t width;
	precision_t precision;
	modifier_t modifer;
} state_t;

/* Core */
int my_printf(char *str, ...);
int check_specifier(va_list args, char *str, int *i, int *len);

/* Flags */
char *which_flag(char *str, int *i);
int is_flag(char x);

/* Width */

/* Precision */

/* Modifier */

/* Types */
int put_int(state_t state, va_list args, char *str, int x);
int put_char(state_t state, va_list args, char *str, int x);
int put_str(state_t state, va_list args, char *str, int x);
int put_ptr(state_t state, va_list args, char *str, int x);
int put_uint(state_t state, va_list args, char *str, int x);
int put_percent(state_t state, va_list args, char *str, int x);
int put_binary(state_t state, va_list args, char *str, int x);
int put_octal(state_t state, va_list args, char *str, int x);
int put_minhex(state_t state, va_list args, char *str, int x);
int put_majhex(state_t state, va_list args, char *str, int x);
int put_float(state_t state, va_list args, char *str, int x);

/* Convert */
char *my_putnbr_base(long int nbr, char *base_to, char *result);
char *my_putnbr_int_base(long int nbr, char *base_to, char *result);
char *my_putnbr_float(long int nbr, char *base_to);

/* Utils */
char *my_rev_str(char *str);
void my_put_nbr(int nb);
int my_putlenstr(char *str);
int my_putstr_min(char *str);
char *my_pstrcpy(char *dest, char const *src);

#endif
