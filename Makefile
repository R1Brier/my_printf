##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

SRC	=	my_printf.c	\
		my_revstr.c	\
		fonct_one.c	\
		fonct_sec.c	\
		pointer.c	\
		my_strlen.c	\
		flag_fp.c	\
		flag_sp.c	\
		check_flag.c	\
		formatted_flag.c	\
		check.c

OBJ	=	$(SRC:.c=.o)

##CFLAGS +=	-Wall -Wextra -W

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
