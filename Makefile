NAME	= checker
CC		= gcc
FLAGS	= -Wall -Wextra -Werror -c
LIBFT_DIRECTORY = ./libft
HEADERS_DIRECTORY = ./includes
SRC_DIR = ./srcs/
LIBRARIES = -lft -Llibft
LIBFT	= ./libft/*
INCLUDES = -I./libft/includes -I./includes

SRCS		= $(SRC_DIR)checker.c $(SRC_DIR)stacks.c $(SRC_DIR)/functions/stack_functions.c $(SRC_DIR)/functions/operations_1.c
OBJS		= $(SRCS:.c=.o)
FLAGS =		-Wall -Werror -Wextra

all:		$(NAME)

$(NAME): $(SRCS) $(LIBFT) $(HEADERS_DIRECTORY)
		cd ./libft && make && make clean
		$(CC) $(FLAGS) $(INCLUDES) $(SRCS) $(LIBRARIES) -o $(NAME)

clean:
		/bin/rm -f $(OBJS)
		cd ./libft && make clean

fclean: clean
		/bin/rm -f $(NAME)
		cd ./libft && make fclean

re: fclean all