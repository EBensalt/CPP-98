# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 10:23:43 by ebensalt          #+#    #+#              #
#    Updated: 2023/04/06 10:29:38 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= aaaaand..._open!
CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
CPP			= main.cpp \
			  ClapTrap.cpp
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
