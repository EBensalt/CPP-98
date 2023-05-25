# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/20 20:38:26 by ebensalt          #+#    #+#              #
#    Updated: 2023/05/20 20:43:58 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= RPN
CPP			= main.cpp \
			  RPN.cpp
CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
O			= $(CPP:.cpp=.o)
RM			= rm -rf
all			: $(NAME)
$(NAME)		: $(O)
	$(CC) $(CPPFLAGS) $(O) -o $(NAME)
clean		:
	$(RM) $(O)
fclean		: clean
	$(RM) $(NAME)
re			: fclean all
