##
## EPITECH PROJECT, 2019
## make
## File description:
## make
##

NAME	= palindrome

CC 	= gcc

CFLAGS	= -Wall -I./include

SCR	=	src/main.c				\
		src/palindrome_withn_opt.c		\
		src/palindrome_withp_opt.c		\
		src/conversion.c			\
		src/make.c				\
		src/make3.c				\
		src/make4.c				\
		src/make2.c				\
		src/usage.c				\
		lib/my_getnbr.c				\
		lib/my_putchar.c			\
		lib/tool.c				\
		lib/my_putstr.c				\
		lib/my_putnbr.c				\
		lib/my_strcmp.c				\
		lib/my_strlen.c				\
		lib/my_strdup.c				\
		lib/my_revstr.c

OBJ	= $(SCR:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
