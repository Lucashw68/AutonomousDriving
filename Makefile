##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c			\
		src/ia.c			\
		src/controls/detect_end.c	\
		src/controls/direction.c	\
		src/controls/speed.c		\

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	= 	-Wall -Wextra -L$(BASIC) -lbasic -L$(GNL) -lgnl -L$(PRINT) -lprint $(INCLUDE)

INCLUDE =       -I./include/ -I$(BASIC) -I$(GNL) -I$(PRINT)

BASIC	=	lib/basic_lib/

GNL 	=	lib/gnl/

PRINT	=	lib/print_lib/

BONUS	=	bonus/

RM	=	@rm -rf

NAME	=	ai

YELLOW = '\033[93m'

all:		$(NAME)

$(NAME):	$(OBJ)
		@make -C $(BASIC)
		@make -C $(GNL)
		@make -C $(PRINT)
		@gcc $(OBJ) $(CFLAGS) -o $(NAME) $(INCLUDE)
		@echo '\n'$(YELLOW)"DONE"

bonus:
		@make -C $(BONUS)

clean:
		@$(RM) $(OBJ)
		@make clean -C $(BASIC)
		@make clean -C $(GNL)
		@make clean -C $(PRINT)
		@make clean -C $(BONUS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
