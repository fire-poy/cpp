NAME=fixed-point_number_class
SRC=./main.cpp\
./fixxed.cpp\
# ./Fixed.cpp\
# ./Fixed1.cpp\
# ./Constructor.cpp\
# ./Operator.cpp\


CC=g++
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