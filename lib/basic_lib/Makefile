##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	my_strlen.c		\
		my_putchar.c		\
		my_putstr.c		\
		my_strcat.c		\
		my_strcmp.c		\
		my_strncmp.c		\
		my_strdup.c		\
		my_str_to_wordtab.c	\
		my_tablen.c		\
		is_num.c		\
		is_a_sep.c		\
		my_getnbr.c		\
		my_strcpy.c		\

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-Wall -pedantic -Wextra

RM	=	@rm -rf

NAME	=	libbasic.a

all:		$(NAME)

$(NAME):	$(OBJ)
		@ar rc ../libbasic.a $(OBJ)
		@cp ../$(NAME) .

clean:
		@$(RM) $(OBJ)
		@$(RM) $(NAME)
		@$(RM) ../$(NAME)
