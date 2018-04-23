##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	get_next_line.c	\

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-Wall -pedantic -Wextra

RM	=	@rm -rf

NAME	=	libgnl.a

all:		$(NAME)

$(NAME):	$(OBJ)
		@ar rc ../libgnl.a $(OBJ)
		@cp ../$(NAME) .

clean:
		@$(RM) $(OBJ)
		@$(RM) $(NAME)
		@$(RM) ../$(NAME)
