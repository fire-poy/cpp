NAME=Serena,_my_love! 

SRC=./main.cpp\
	./ClapTrap.cpp\
	./ScavTrap.cpp\

CC=g++-11
CFLAGS=-Wall -Wextra -Werror -std=c++98 -pedantic #-fsanitize=address -g3

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