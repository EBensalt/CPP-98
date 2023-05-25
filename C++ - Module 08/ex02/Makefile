# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 15:24:22 by ebensalt          #+#    #+#              #
#    Updated: 2023/05/16 15:02:21 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex02
CPP			= main.cpp
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
