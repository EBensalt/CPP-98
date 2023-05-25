# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/24 19:51:59 by ebensalt          #+#    #+#              #
#    Updated: 2023/03/28 18:27:22 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= moar_brainz!
CC		= c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
CPP		= main.cpp \
		  Zombie.cpp \
		  zombieHorde.cpp
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
