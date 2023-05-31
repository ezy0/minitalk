# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/31 13:07:16 by migmoren          #+#    #+#              #
#    Updated: 2023/05/31 13:41:50 by migmoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C = client
NAME_S = server

CC = gcc
CFLAGS = -Wall -Wextra -Werror 

SRC_C = client.c
OBJS_C = ${SRC_C:.c=.o}

SRC_S = server.c
OBJS_S = ${SRC_S:.c=.o}

SRC_LIBFT = libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_isalnum.c libft/ft_isascii.c libft/ft_isprint.c libft/ft_toupper.c \
			libft/ft_tolower.c libft/ft_strchr.c libft/ft_strrchr.c libft/ft_strncmp.c libft/ft_strlen.c libft/ft_strlcpy.c \
			libft/ft_strlcat.c libft/ft_strnstr.c libft/ft_atoi.c libft/ft_bzero.c libft/ft_memset.c libft/ft_memcpy.c \
			libft/ft_memmove.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_calloc.c libft/ft_strdup.c libft/ft_substr.c \
			libft/ft_strjoin.c libft/ft_split.c libft/ft_strtrim.c libft/ft_itoa.c libft/ft_strmapi.c libft/ft_striteri.c \
			libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c \
			libft/ft_lstnew_bonus.c libft/ft_lstadd_front_bonus.c libft/ft_lstsize_bonus.c libft/ft_lstlast_bonus.c \
			libft/ft_lstclear_bonus.c libft/ft_lstadd_back_bonus.c libft/ft_lstdelone_bonus.c libft/ft_lstiter_bonus.c libft/ft_lstmap_bonus.c \
			libft/ft_printf.c libft/ft_print_s.c libft/ft_print_p.c libft/ft_print_nbr.c

OBJS_LIBFT	= ${SRC_LIBFT:.c=.o}

#.c.o: ${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME_C) $(NAME_S)

$(NAME_C): $(OBJS_C) $(OBJS_LIBFT)
	$(CC) $(OBJS_C) $(OBJS_LIBFT) -o $(NAME_C)

$(NAME_S): $(OBJS_S) $(OBJS_LIBFT)
	$(CC) $(OBJS_S) $(OBJS_LIBFT) -o $(NAME_S)

clean:
	@rm -f $(OBJS_C) $(OBJS_S) $(OBJS_LIBFT)

fclean: clean
	@rm -f $(NAME_C) $(NAME_S)

re: fclean all

.PHONY: all clean fclean re