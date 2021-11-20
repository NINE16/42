SRCS	=	${wildcard *.c}
OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
					ar rc ${NAME} ${OBJS}
					ranlib ${NAME]}

all:			${NAME}

clean:
				echo "$(OBJS)"
				${RM} $(OBJS)

fclean:		clean
					${RM} ${NAME}

re:				fclean all

.PHONY: 	all clean fclean re
