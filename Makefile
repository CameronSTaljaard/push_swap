NAME	= checker7
CC		= gcc
FLAGS	= -Wall -Wextra -Werror -c
LIBFT_DIRECTORY = ./libft
HEADERS_DIRECTORY = ./includes
SRC_DIR = ./srcs/
LIBRARIES = -lft -Llibft
LIBFT	= ./libft/*
INCLUDES = -I./includes/ -I./libft/includes/

SRCS		= $(SRC_DIR)checker.c $(SRC_DIR)stacks.c $(SRC_DIR)ft_print_stack.c
OBJS		= $(SRCS:.c=.o)
FLAGS =		-Wall -Werror -Wextra

all:		$(NAME)

$(NAME): $(SRCS) $(LIBFT)
		cd ./libft && make
		gcc -L ./libft/libft.a -I ./libft/includes -I ./includes/ $(SRCS)
		#$(CC) $(FLAGS) $(LIBRARIES) $(INCLUDES) $(SRCS) -o $(NAME)

clean:
		/bin/rm -f $(OBJS)
		cd ./libft && make clean

fclean: clean
		/bin/rm -f $(NAME)
		cd ./libft && make fclean

re: fclean all