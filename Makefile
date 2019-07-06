NAME_CH	= checker
CC		= gcc
FLAGS	= -Wall -Wextra -Werror -c
LIBFT_DIRECTORY = ./libft
HEADERS_DIRECTORY = ./includes
SRC_DIR = ./srcs/
LIBRARIES = -lft -Llibft
LIBFT	= ./libft/*
INCLUDES = -I./libft/includes -I./includes
INCLUDES_DIR = ./includes

RED=$(echo -e "\033[31m")
YELLOW=$(echo -e "\033[0;33m")
END=$(echo -e "\033[0m")

CH_SRCS		= $(SRC_DIR)checker.c $(SRC_DIR)functions/rot_operations.c $(SRC_DIR)functions/shift_operations.c
CH_SRCS		+= $(SRC_DIR)functions/validator.c $(SRC_DIR)functions/check_op.c 
CH_SRCS		+= $(SRC_DIR)stack/stack_handler.c $(SRC_DIR)stack/stack_functions.c
CH_SRCS		+= $(SRC_DIR)/visualizer/visualizer.c $(SRC_DIR)/functions/read_input.c $(SRC_DIR)/stack/stack_sorted.c
CH_OBJS		= $(CH_SRCS:.c=.o)
FLAGS =		-Wall -Werror -Wextra

all:		$(NAME_CH)

$(NAME_CH): $(CH_SRCS) $(LIBFT) $(HEADERS_DIRECTORY) $(INCLUDES_DIR)
		@cd ./libft && make && make clean
		@echo $(RED)Built libft.$(END);
		@$(CC) $(FLAGS) $(INCLUDES) $(CH_SRCS) $(LIBRARIES) -o $(NAME_CH)
		@echo $(RED)Successfully built $(NAME_CH).$(END);

clean:
		@/bin/rm -f $(CH_OBJS)
		@cd ./libft && make clean

fclean: clean
		@/bin/rm -f $(NAME_CH)
		@cd ./libft && make fclean

re: fclean all