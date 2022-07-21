SRCS		= main.cpp serializers.cpp Data.cpp
SRCS		:= $(addprefix src/,$(SRCS)) 
OBJS		= ${SRCS:.cpp=.o}
NAME		= serializer
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