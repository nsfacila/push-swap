# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/23 20:35:03 by noelsanc          #+#    #+#              #
#    Updated: 2025/02/11 20:35:08 by noelsanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CC = clang

CFLAGS = -Wall -Wextra -Werror

SRC = \
ft_atoi.c\
ft_bzero.c\
ft_calloc.c\
ft_isalpha.c\
ft_isalnum.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_itoa.c\
ft_strmapi.c\
ft_memchr.c\
ft_memcmp.c\
ft_memmove.c\
ft_memset.c\
ft_memcpy.c\
ft_putchar_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_putstr_fd.c\
ft_split.c\
ft_strlen.c\
ft_strncmp.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_strchr.c\
ft_strrchr.c\
ft_strnstr.c\
ft_substr.c\
ft_striteri.c\
ft_strtrim.c\
ft_strjoin.c\
ft_strdup.c\
ft_tolower.c\
ft_toupper.c\

BONUS_SRC = \
	ft_lstadd_back_bonus.c\
	ft_lstadd_front_bonus.c\
	ft_lstclear_bonus.c\
	ft_lstdelone_bonus.c\
	ft_lstlast_bonus.c\
	ft_lstnew_bonus.c\
	ft_lstsize_bonus.c\
	ft_lstiter_bonus.c\
	ft_lstmap_bonus.c\

OBJS = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all:  $(NAME)

$(NAME):$(OBJS) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJ)
	
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME) $(OBJS)
	rm -f $(NAME) $(BONUS_OBJ)

re:	fclean all

.PHONY: fclean clean all re bonus

