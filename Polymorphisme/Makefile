NAME		= class_simple

CC		= g++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic 

OBJS	= ${SRC:.cpp=.o}

RM		= rm -f

SRC 		= ./main.cpp\
			  ./Sample.class.cpp\

all: $(NAME)

.cpp.o:
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

clean:
		   	$(RM) $(OBJS)

fclean:		clean  
	   		$(RM) $(NAME)

re:			fclean all

.PHONY : all clean fclean re bonus

