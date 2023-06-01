# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/31 13:07:16 by migmoren          #+#    #+#              #
#    Updated: 2023/06/01 14:19:06 by migmoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C = client
NAME_S = server
HEADERS	= minitalk.h

CC	= gcc -Wall -Werror -Wextra -g -fsanitize=address

INCLUDE	= -Llibft -lft

SRC_C = client.c
OBJS_C = ${SRC_C:.c=.o}

SRC_S = server.c
OBJS_S = ${SRC_S:.c=.o}

SRC_CB = client_bonus.c
OBJS_CB = ${SRC_CB:.c=.o}

SRC_SB = server_bonus.c
OBJS_SB = ${SRC_SB:.c=.o}

%.o: %.c ${HEADERS} libft/libft.a
		${CC} $< -c -o $@

all: libft ${NAME_S} ${NAME_C}

libft:
	@make bonus -C libft

${NAME_S}:	${OBJS_S} ${HEADERS}
	${CC} ${SRC_S} ${INCLUDE} -o ${NAME_S}

${NAME_C}:	${OBJS_C} ${HEADERS}
	${CC} ${SRC_C} ${INCLUDE} -o ${NAME_C}

bonus: libft ${NAME_CB} ${NAME_SB}

${NAME_CB}: ${OBJS_CB} ${OBJS_LIBFT}
	${CC} ${OBJS_CB} ${OBJS_LIBFT} -o ${NAME_CB}

${NAME_SB}: ${OBJS_SB} ${OBJS_LIBFT}
	${CC} ${OBJS_SB} ${OBJS_LIBFT} -o ${NAME_SB}

clean:
	@make clean -C libft
	@rm -rdf ${OBJS_S} ${OBJS_C}

fclean:	clean
	@make fclean -C libft
	@rm -f ${NAME_C} ${NAME_S}

re: fclean all

.PHONY:	all libft clean fclean re
