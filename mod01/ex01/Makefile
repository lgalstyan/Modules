NAME    = zombie
SRCS    = $(shell find . -name "*.cpp")
OBJS 	= ${SRCS:.cpp=.o}
FLAGS   = -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
CC      = c++

%.o: %.cpp %.hpp
	$(CC) ${FLAGS} -I. -c $< -o $@

all:	${NAME}

$(NAME):	$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@${RM} ${OBJS}

fclean:		clean
	@${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re