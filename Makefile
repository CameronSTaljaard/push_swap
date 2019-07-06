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

NO_COLOR=\x1b[0m
OK_COLOR=\x1b[32;01m
ERROR_COLOR=\x1b[31;01m
WARN_COLOR=\x1b[33;01m

OK_STRING=$(OK_COLOR)[OK]$(NO_COLOR)
ERROR_STRING=$(ERROR_COLOR)[ERRORS]$(NO_COLOR)
WARN_STRING=$(WARN_COLOR)[WARNINGS]$(NO_COLOR)

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
		@echo "$(OK_STRING)"

clean:
		@/bin/rm -f $(CH_OBJS)
		@cd ./libft && make clean

fclean: clean
		@/bin/rm -f $(NAME_CH)
		@cd ./libft && make fclean

re: fclean all