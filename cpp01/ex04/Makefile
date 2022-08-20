# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpons <mpons@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/19 08:52:15 by mpons             #+#    #+#              #
#    Updated: 2022/08/20 17:25:04 by mpons            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Sed_is_for_losers

CC		= g++-11
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic 

OBJS	= ${SRC:.cpp=.o}

RM		= rm -f

SRC 		= ./main.cpp\

all: $(NAME)

.cpp.o:
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

clean:
		   	$(RM) $(OBJS)

fclean:		clean  
	   		$(RM) $(NAME)

re:			fclean all

.PHONY : all clean fclean re bonus
