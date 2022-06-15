# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpons <mpons@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 10:53:36 by mpons             #+#    #+#              #
#    Updated: 2022/06/15 13:34:30 by mpons            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = MyAwesomePhoneBook

CC		= g++-11
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic #-fsanitize=address -g3 

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
