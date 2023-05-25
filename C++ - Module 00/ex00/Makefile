# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 10:00:43 by ebensalt          #+#    #+#              #
#    Updated: 2023/03/18 13:50:20 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
CPP		= Megaphone.cpp
O		= $(CPP:.cpp=.o)
CC		= c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
all		: $(NAME)
$(NAME)	: $(O)
	$(CC) $(CPPFLAGS) $(O) -o $(NAME)
clean	:
	rm -rf $(O)
fclean	: clean
	rm -rf $(NAME)
re		: fclean all