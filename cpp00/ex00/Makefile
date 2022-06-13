# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpons <mpons@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 10:53:36 by mpons             #+#    #+#              #
#    Updated: 2022/06/13 13:43:30 by mpons            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = megaphone

CC		= c++--11
CFLAGS	= -Wall -Wextra -Werror -pedantic -fsanitize=address -g3 -std=c++98
#g++-11 -Werror -Wextra -Wall -std=c++98 -pedantic

#CC			= c++
#CFLAGS	= c++ gcc -Wall -Wextra -Werror
#CPP		= -std=c++98

OBJS	= ${SRC:.cpp=.o}

RM		= rm -f

SRC 	= ./megaphone.cpp

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
