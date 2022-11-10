NAME=ClasseAbstraite
SRC=./main.cpp\
	./AAnimal.cpp\
	./Cat.cpp\
	./Dog.cpp\
	./Brain.cpp\

CC=g++
CFLAGS=-Wall -Wextra -Werror -std=c++98 -pedantic #-g3 -fsanitize=address 

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

