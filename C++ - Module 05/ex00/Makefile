# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 10:12:15 by ebensalt          #+#    #+#              #
#    Updated: 2023/04/26 12:45:59 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex00
CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
CPP			= main.cpp \
			  Bureaucrat.cpp
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
