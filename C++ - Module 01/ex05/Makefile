# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 18:03:03 by ebensalt          #+#    #+#              #
#    Updated: 2023/03/27 20:38:46 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= harl_2.0
CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
CPP			= main.cpp \
			  Harl.cpp
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
