# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/25 06:28:22 by ebensalt          #+#    #+#              #
#    Updated: 2023/03/26 06:46:27 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= hi_this_is_brain
CC		= c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
CPP		= main.cpp
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
