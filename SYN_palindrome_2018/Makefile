##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	main.c	\
		src/getopt_fl.c	\
		src/ftc_opt.c		\
		src/error_handling.c	\
		src/palindrome.c

OBJ	=	$(SRC:.c=.o)

NAME 	=	palindrome

CFLAGS	=	-L lib/my/ -lmy -g3 -Iinclude -lm -W -Wall -Wextra -lm

all:	$(NAME)

$(NAME):	$(OBJ)
	@make -C ./lib/my/
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@make clean -C ./lib/my/
	@rm -f $(OBJ)

fclean:	clean
	@make fclean -C ./lib/my/
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
