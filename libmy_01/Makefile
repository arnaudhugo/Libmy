##
## Makefile for  in /home/arnaud/libmy_01
## 
## Made by ARNAUD Hugo
## Login   <arnaud_h@etna-alternance.net>
## 
## Started on  Sat Sep 30 09:12:28 2017 ARNAUD Hugo
## Last update Sat Sep 30 11:53:31 2017 ARNAUD Hugo
##
CC	= gcc
NAME	= libmy.a
SRC	= my_putchar.c	\
	  my_isneg.c	\
	  my_swap.c	\
	  my_putstr.c	\
	  my_strlen.c	\
	  my_strcpy.c	\
	  my_strcmp.c
OBJ	= $(SRC:%.c=%.o)
RM	= rm -f
CFLAGS	= -W -Wall -ansi -pedantic -L. -I.

$(NAME):	$(OBJ)
		ar r $(NAME) $(OBJ)
		ranlib $(NAME)
all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
