# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpons <mpons@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 10:53:36 by mpons             #+#    #+#              #
#    Updated: 2022/07/19 17:34:59 by mpons            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = Moar brainz!

CC		= g++-11
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic #-fsanitize=address -g3

OBJS	= ${SRC:.cpp=.o}

RM		= rm -f

SRC 	= ./main.cpp\
		  ./Zombie.cpp\
		  ./zombieHorde.cpp\

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
