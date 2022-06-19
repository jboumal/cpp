SRCS		= megaphone.c
SRCS		:= $(addprefix src/,$(SRCS)) 
OBJS		= ${SRCS:.c=.o}
NAME		= megaphone
CC			= g++
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror -Iinclude

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
all:			$(NAME)
clean:
				${RM} ${OBJS}
fclean:			clean
				${RM} $(NAME)
re:				fclean all
.PHONY:			all clean fclean re