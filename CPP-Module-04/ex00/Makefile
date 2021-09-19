# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbari <mbari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 12:40:37 by mbari             #+#    #+#              #
#    Updated: 2021/09/19 18:36:11 by mbari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp \
Cat.cpp \
Dog.cpp \
Animal.cpp \
WrongCat.cpp \
WrongAnimal.cpp

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= Poly

all:			$(NAME)

$(NAME):		$(OBJS) Cat.hpp Dog.hpp Animal.hpp WrongCat.hpp WrongAnimal.hpp
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS) -I Cat.hpp -I Dog.hpp -I Animal.hpp -I WrongCat.hpp -I WrongAnimal.hpp

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
