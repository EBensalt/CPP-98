# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/18 17:41:09 by ebensalt          #+#    #+#              #
#    Updated: 2023/03/18 17:47:14 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook
CC		= c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
CPP		= PhoneBook.cpp \
		  Contact.cpp \
		  main.cpp
O		= $(CPP:.cpp=.o)
all		: $(NAME)
$(NAME)	: $(O)
	$(CC) $(CPPFLAGS) $(O) -o $(NAME)
clean	:
	$(RM) $(O)
fclean	: clean
	$(RM) $(NAME)
re		: fclean all
