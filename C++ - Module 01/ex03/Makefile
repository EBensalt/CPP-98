# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 01:12:25 by ebensalt          #+#    #+#              #
#    Updated: 2023/03/26 06:45:02 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= unnecessary_violence
CC			= c++
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98
RM			= rm -rf
CPP			= main.cpp \
			  Weapon.cpp \
			  HumanA.cpp \
			  HumanB.cpp
O			= $(CPP:.cpp=.o)
all			: $(NAME)
$(NAME)		:$(O)
	$(CC) $(CPPFLAGS) $(O) -o $(NAME)
	clear
clean		:
	$(RM) $(O)
	clear
fclean		: clean
	$(RM) $(NAME)
	clear
re			: fclean all
