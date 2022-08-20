# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpons <mpons@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/19 13:52:08 by mpons             #+#    #+#              #
#    Updated: 2022/08/19 15:03:30 by mpons            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Harl_filter

CC			= g++-11
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -pedantic 

OBJS		= ${SRC:.cpp=.o}

RM			= rm -f

SRC 		= ./main.cpp\
			  ./Harl.cpp\

all:		$(NAME)

.cpp.o:
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

clean:
		   	$(RM) $(OBJS)

fclean:		clean  
	   		$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus


