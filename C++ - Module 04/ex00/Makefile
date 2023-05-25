# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 21:00:41 by ebensalt          #+#    #+#              #
#    Updated: 2023/04/08 07:05:15 by ebensalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= polymorphism
CPP			= src/main.cpp \
			  src/Animal.cpp \
			  src/Dog.cpp \
			  src/Cat.cpp \
			  src/WrongAnimal.cpp \
			  src/WrongCat.cpp
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
