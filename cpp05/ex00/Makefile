SRCS		= main.cpp Bureaucrat.cpp
SRCS		:= $(addprefix src/,$(SRCS)) 
OBJS		= ${SRCS:.cpp=.o}
NAME		= bureaucrat
CC			= c++
RM			= rm -f
CPPFLAGS	= -Wall -Wextra -Werror -Iinclude -std=c++98

$(NAME):		$(OBJS)
				$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)
all:			$(NAME)
clean:
				${RM} ${OBJS}
fclean:			clean
				${RM} $(NAME)
re:				fclean all
.PHONY:			all clean fclean re