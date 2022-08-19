# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpons <mpons@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 10:53:36 by mpons             #+#    #+#              #
#    Updated: 2022/08/15 16:58:49 by mpons            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = BraiiiiiiinnnzzzZ

CC		= g++-11
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic #-fsanitize=address -g3

OBJS	= ${SRC:.cpp=.o}

RM		= rm -f

SRC 	= ./main.cpp\
		  ./Zombie.cpp\
		  ./newZombie.cpp\
		  ./randomChump.cpp\

all: $(NAME)

.cpp.o:
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME) 

clean:
		   	$(RM) $(OBJS)

fclean:		clean  
	   		$(RM) $(NAME)

re:			fclean all

.PHONY : all clean fclean re bonus
