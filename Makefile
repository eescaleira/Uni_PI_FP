NAME = store_manager

CC = cc 
FLAGS = -Wall -Wextra -Werror
SRC = main.c \
		algorythms.c \
		data_innit.c \
		exit_funcs.c \
		menu_1_rmv_func.c \
		menu_3_print_funcs.c \
		menu_input_hand.c \
		menu_print.c \
		suport_funcs.c \
		menu_2_print_funcs.c
		 

SRC_PATH = ./src/
OBJ_PATH = ./obj/

SRCS = $(addprefix $(SRC_PATH), $(SRC))

OBJ = $(SRC:.c=.o)
OBJS = $(addprefix $(OBJ_PATH), $(OBJ))

all: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c | $(OBJ_PATH)
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)