NAME=Conversion_scalaire 
SRC=./main.cpp\
	./StringConversor.cpp\
	
CC=g++
CFLAGS=-Wall -Wextra -Werror -std=c++98 -pedantic -Wfatal-errors -g3#-fsanitize=address -g3

OBJS=${SRC:.cpp=.o}
RM=rm -f

all:$(NAME)

.cpp.o:
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

clean:
	$(RM) $(OBJS)

fclean:clean  
	$(RM) $(NAME)

re:	fclean all

.PHONY : all clean fclean re

