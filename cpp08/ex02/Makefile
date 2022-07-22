SRCS		= main.cpp
SRCS		:= $(addprefix src/,$(SRCS)) 
OBJS		= ${SRCS:.cpp=.o}
NAME		= mutantstack
CC			= c++
RM			= rm -f
CPPFLAGS	=  -Iinclude

$(NAME):		$(OBJS)
				$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)
all:			$(NAME)
clean:
				${RM} ${OBJS}
fclean:			clean
				${RM} $(NAME)
re:				fclean all
.PHONY:			all clean fclean re