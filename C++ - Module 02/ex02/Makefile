# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/05 06:20:54 by ebensalt          #+#    #+#              #
#    Updated: 2023/04/06 05:40:45 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= now_were_talking
CPP			= main.cpp \
			  Fixed.cpp
CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
O			= $(CPP:.cpp=.o)
RM			= rm -rf
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
