# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlavergn <mlavergn@s19.be>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 12:29:59 by mlavergn          #+#    #+#              #
#    Updated: 2024/10/23 22:34:14 by mlavergn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	push_swap
DIR			= 	srcs/
PRINTF_DIR	= 	ft_printf/
CC			= 	cc
RM			= 	rm -f
CFLAGS		= 	-Wall -Wextra -Werror
PRINTF		= 	$(PRINTF_DIR)libftprintf.a
SRCS		= 	${DIR}main.c ${DIR}check.c ${DIR}utils.c ${DIR}init.c \
				${DIR}utils_node.c ${DIR}swap.c ${DIR}push.c ${DIR}rotate.c \
				${DIR}rrotate.c ${DIR}sort.c ${DIR}utils_node2.c
OBJS		= ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS} $(PRINTF)
	${CC} ${CFLAGS} ${OBJS} $(PRINTF) -o ${NAME}

$(PRINTF):
	make -C $(PRINTF_DIR)

all: $(PRINTF) ${NAME}

clean:
	${RM} ${OBJS}
	make clean -C $(PRINTF_DIR)

fclean: clean
	${RM} ${NAME}
	make fclean -C $(PRINTF_DIR)

re: fclean all

.PHONY : all bonus clean fclean re