##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	main.c			\
		bits.c			\
		music.c			\
		create/create.c		\
		create/set.c		\
		draw/draw.c		\
		events/events.c		\
		events/joystick.c	\
		events/keyboard.c	\
		events/button.c		\
		events/axis.c		\
		events/mouse.c		\
		events/controls.c	\
		update/update.c		\
		destroy.c		\

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	= 	-Wall -Wextra -L$(BASIC) -lbasic -L$(PRINT) -lprint -L$(GNL) -lgnl $(INCLUDE) -lc_graph_prog

INCLUDE =       -I./include/ -I$(BASIC) -I$(PRINT)

BASIC	=	../lib/basic_lib/

PRINT	=	../lib/print_lib/

GNL	=	../lib/gnl/

RM	=	@rm -rf

NAME	=	controller

YELLOW =	'\033[93m'

all:		$(NAME)

$(NAME):	$(OBJ)
		@make -C $(BASIC)
		@make -C $(GNL)
		@make -C $(PRINT)
		@gcc $(OBJ) $(CFLAGS) -o $(NAME) $(INCLUDE)
		@echo '\n'$(YELLOW)"DONE"

clean:
		@$(RM) $(OBJ)
		@make clean -C $(BASIC)
		@make clean -C $(GNL)
		@make clean -C $(PRINT)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
