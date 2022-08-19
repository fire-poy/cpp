# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpons <mpons@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 10:53:36 by mpons             #+#    #+#              #
#    Updated: 2022/08/18 14:08:10 by mpons            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Unnecessary_violence

CC		= g++-11
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic #-fsanitize=address -g3

OBJS	= ${SRC:.cpp=.o}

RM		= rm -f
#SRC ou RM sont des variables
SRC 	=	./main.cpp\
			./Weapon.cpp\
			./HumanA.cpp\
			./HumanB.cpp\

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

# Variables can only be strings. You'll typically want to use `:=`, but `=` also works.

# Reference variables using either `${}` or `$()`
# ```
# x := dude

# all:
# 	echo $(x)
# 	echo ${x}

# 	# Bad practice, but works
# 	echo $x 
# ```

# wildcard
# thing_right := $(wildcard \*.o)
