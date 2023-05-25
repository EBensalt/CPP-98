# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 07:29:56 by ebensalt          #+#    #+#              #
#    Updated: 2023/03/26 07:53:22 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= sed_is_for_losers
CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
CPP			= main.cpp
O			= $(CPP:.cpp=.o)
all			: $(NAME)
$(NAME)		: $(O)
	$(CC) $(CPPFLAGS) $(O) -o $(NAME)
	clear
clean		:
	$(RM) $(O)
	clear
fclean		: clean
	$(RM) $(NAME)
	clear
re			: fclean all
