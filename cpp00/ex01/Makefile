# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpons <mpons@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 10:53:36 by mpons             #+#    #+#              #
#    Updated: 2022/06/03 16:07:47 by mpons            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = MyAwesomePhoneBook

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -fsanitize=address -g3 -std=c++98

#CC			= c++
#CFLAGS	= c++ gcc -Wall -Wextra -Werror
#CPP		= -std=c++98

OBJS	= ${SRC:.cpp=.o}

RM		= rm -f

SRC 	=	./Contact.cpp\
		  	./PhoneBook.cpp\
			./main.cpp\

all: $(NAME)

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME) 

clean:
		   	$(RM) $(OBJS)

fclean:		clean  
	   		$(RM) $(NAME)

re:			fclean all

.PHONY : all clean fclean re bonus
