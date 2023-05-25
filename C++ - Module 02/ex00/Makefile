# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/03 03:30:07 by ebensalt          #+#    #+#              #
#    Updated: 2023/04/04 08:58:58 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= my_first_class_in_orthodox_canonical_form
CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
CPP			= main.cpp \
			  Fixed.cpp
O			= $(CPP:.cpp=.o)
RM			= rm -rf
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
