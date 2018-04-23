##
## EPITECH PROJECT, 2017
## my_printf
## File description:
## my_printf
##

SRC	=	my_printf.c 		\
		specifier.c		\
		flags.c			\
		types/type_usual.c	\
		types/type_unusual.c	\
		types/type_basex.c	\
		utils/utils.c		\
		utils/my_ope_nbr.c	\
		utils/utils_string.c	\
		convert.c		\

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

PWD 	:= 	$(shell pwd)

CFLAGS =	$(INCLUDE) -L$(BASIC) -lprint

INCLUDE =	-I./include/ -I$(BASIC)

RM	=	@rm -rf

BASIC	=	../basic_lib

NAME	=	my_printf

ARCH	=	libprint.a

all:		 $(NAME)

$(NAME):	$(OBJ)
		ar rc $(ARCH) $(OBJ)

clean:
		@$(RM) $(OBJ)
		$(RM) $(ARCH)

fclean:		clean

re:		fclean all
