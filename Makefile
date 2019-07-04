NAME_CH	= checker
CC		= gcc
FLAGS	= -Wall -Wextra -Werror -c
LIBFT_DIRECTORY = ./libft
HEADERS_DIRECTORY = ./includes
SRC_DIR = ./srcs/
LIBRARIES = -lft -Llibft
LIBFT	= ./libft/*
INCLUDES = -I./libft/includes -I./includes

RED=$(echo -e "\033[31m")
YELLOW=$(echo -e "\033[0;33m")
END=$(echo -e "\033[0m")

SRCS		= $(SRC_DIR)checker.c $(SRC_DIR)stacks.c $(SRC_DIR)functions/stack_functions.c $(SRC_DIR)functions/rot_operations.c $(SRC_DIR)functions/shift_operations.c
SRCS		+= $(SRC_DIR)functions/check_op.c $(SRC_DIR)functions/validator.c $(SRC_DIR)/functions/visualizer.c
OBJS		= $(SRCS:.c=.o)
FLAGS =		-Wall -Werror -Wextra

all:		$(NAME_CH)

$(NAME_CH): $(SRCS) $(LIBFT) $(HEADERS_DIRECTORY)
		@cd ./libft && make && make clean
		@echo $(RED)Built libft.$(END);
		@$(CC) $(FLAGS) $(INCLUDES) $(SRCS) $(LIBRARIES) -o $(NAME_CH)
		@echo $(RED)Successfully built $(NAME_CH).$(END);

clean:
		@/bin/rm -f $(OBJS)
		@cd ./libft && make clean

fclean: clean
		@/bin/rm -f $(NAME)
		@cd ./libft && make fclean

re: fclean all