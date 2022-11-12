NAME=Ah_mais_non,_il_vous_faut_la_28B,_pas_la_28C...
SRC=./main.cpp\
	./Bureaucrat.cpp\
	./AForm.cpp\
	./ShrubberyCreationForm.cpp\
	./RobotomyRequestForm.cpp\
	./PresidentialPardonForm.cpp\

CC=g++
CFLAGS=-Wall -Wextra -Werror -std=c++98 -pedantic # -fsanitize=address -g3

OBJS=${SRC:.cpp=.o}
RM=rm -f

all:$(NAME)

.cpp.o:
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

clean:
	$(RM) $(OBJS)
	rm -f $(wildcard *_shrubbery)

fclean:clean  
	$(RM) $(NAME) 
	rm -f $(wildcard *_shrubbery)

re:	fclean all

.PHONY : all clean fclean re
