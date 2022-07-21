SRCS		= main.cpp
SRCS		:= $(addprefix src/,$(SRCS)) 
OBJS		= ${SRCS:.cpp=.o}
NAME		= array
CC			= c++
RM			= rm -f
CPPFLAGS	= -Wall -Wextra -Werror -Iinclude

$(NAME):		$(OBJS)
				$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)
all:			$(NAME)
clean:
				${RM} ${OBJS}
fclean:			clean
				${RM} $(NAME)
re:				fclean all
.PHONY:			all clean fclean re
