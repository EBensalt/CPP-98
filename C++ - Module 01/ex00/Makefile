# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 18:49:48 by ebensalt          #+#    #+#              #
#    Updated: 2023/03/26 06:45:57 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= braiiiiiiinnnzzzz
CC		= c++
CPPFLAGS= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf
CPP		= main.cpp \
		  Zombie.cpp \
		  newZombie.cpp \
		  randomChump.cpp
O		= $(CPP:.cpp=.o)
all		: $(NAME)
$(NAME)	: $(O)
	$(CC) $(CPPFLAGS) $(O) -o $(NAME)
	clear
clean	:
	$(RM) $(O)
	clear
fclean	: clean
	$(RM) $(NAME)
	clear
re		: fclean all
