# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/13 21:37:58 by ebensalt          #+#    #+#              #
#    Updated: 2023/05/13 21:48:18 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex01
CPP			= main.cpp \
			  Span.cpp
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
