NAME=C’est_toujours_mieux_que_d’apporter_le_café
SRC=./main.cpp\
	./Bureaucrat.cpp\
	./AForm.cpp\
	./ShrubberyCreationForm.cpp\
	./RobotomyRequestForm.cpp\
	./PresidentialPardonForm.cpp\
	./Intern.cpp

CC=g++-11
CFLAGS=-Wall -Wextra -Werror -std=c++98 -pedantic -Wfatal-errors# -fsanitize=address -g3

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
