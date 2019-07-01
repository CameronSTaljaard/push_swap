NAME	= checker
CC		= gcc
FLAGS	= -Wall -Wextra -Werror -c
LIBFT_DIRECTORY = ./libft
LIBRARIES = -lft -L$(LIBFT_DIRECTORY)
LIBFT	= ./libft/*

SRCS		= checker.c stacks.c ft_print_list.c
OBJS		= $(SRCS:.c=.o)
FLAGS =		-Wall -Werror -Wextra

all:		$(NAME)

$(NAME): $(SRCS) $(LIBFT)
		cd ./libft && make
		$(CC) $(FLAGS) -lft -L$(LIBFT_DIRECTORY) $(SRCS) -o $(NAME)

clean:
		/bin/rm -f $(OBJS)
		cd ./libft && make clean

fclean: clean
		/bin/rm -f $(NAME)
		cd ./libft && make fclean

re: fclean all