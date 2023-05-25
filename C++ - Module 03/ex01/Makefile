# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 10:23:43 by ebensalt          #+#    #+#              #
#    Updated: 2023/04/07 01:25:25 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= serena,_my_love!
CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
CPP			= main.cpp \
			  ClapTrap.cpp \
			  ScavTrap.cpp
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
