SRCS		= megaphone.c
OBJS		= ${SRCS:.c=.o}
NAME		= megaphone
CC			= c++
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror -std=c++98

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
all:			$(NAME)
clean:
				${RM} ${OBJS}
fclean:			clean
				${RM} $(NAME)
re:				fclean all
.PHONY:			all clean fclean re
