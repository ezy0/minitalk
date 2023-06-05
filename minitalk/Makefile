# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/31 13:07:16 by migmoren          #+#    #+#              #
#    Updated: 2023/06/05 09:18:59 by migmoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C = client
NAME_S = server
#HEADERS	= minitalk.h

CC	= gcc -Wall -Werror -Wextra -g -fsanitize=address

INCLUDE	= -Llibft -lft -I ./

SRC_C = client.c
OBJS_C = ${SRC_C:.c=.o}

SRC_S = server.c
OBJS_S = ${SRC_S:.c=.o}

NAME_CB = client_bonus
NAME_SB = server_bonus
#HEADERS_B =  minitalk_bonus.h

SRC_CB = client_bonus.c
OBJS_CB = ${SRC_CB:.c=.o}

SRC_SB = server_bonus.c
OBJS_SB = ${SRC_SB:.c=.o}

%.o: %.c libft/libft.a
		${CC} $< -c -o $@

all: libft ${NAME_S} ${NAME_C}

libft:
	@make bonus -C libft

${NAME_S}:	${OBJS_S} 
	${CC} ${SRC_S} ${INCLUDE} -o ${NAME_S}

${NAME_C}:	${OBJS_C} 
	${CC} ${SRC_C} ${INCLUDE} -o ${NAME_C}

bonus: libft ${NAME_CB} ${NAME_SB}

${NAME_CB}: ${OBJS_CB} 
	${CC} ${OBJS_CB} ${INCLUDE} -o ${NAME_CB}

${NAME_SB}: ${OBJS_SB} 
	${CC} ${OBJS_SB} ${INCLUDE} -o ${NAME_SB}

clean:
	@make clean -C libft
	@rm -rdf ${OBJS_S} ${OBJS_C}
	@rm -rdf ${OBJS_SB} ${OBJS_CB}

fclean:	clean
	@make fclean -C libft
	@rm -f ${NAME_C} ${NAME_S}
	@rm -f ${NAME_CB} ${NAME_SB}

re: fclean all

rebonus: fclean bonus

.PHONY:	all libft clean fclean re bonus rebonus
