#---------------- NAMES -----------------------

NAME = push_swap

CC = gcc

CFLAGS = -g -fsanitize=address

#-------------- LIBRARY -----------------------


LIBFT_DIR = ./libft

INCLUDE = -L /include -lft

#-----------------SRC & OBJ-------------------

SRC = \
	push_swap.c \
	push.c \
	reverse_rotate.c \
	rotate.c \
	set_init.c \
	swap.c \
	utils.c \
	sort_stack.c \
	

OBJS = $(SRC:.c=.o)
#------------------------RULES-----------------


all: $(NAME)

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS)  -c $< -o $@

$(NAME): $(OBJS)
		@make -C libft
		$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJS) libft/libft.a

clean:
	@make -C $(LIBFT_DIR) clean
	rm -f $(OBJS)

fclean: clean
	@make -C $(LIBFT_DIR) fclean
	rm -f $(NAME)


re : fclean all

.PHONY : all clean fclean re bonus




