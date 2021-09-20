# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbari <mbari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 12:40:37 by mbari             #+#    #+#              #
#    Updated: 2021/09/20 17:31:38 by mbari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp \
Cat.cpp \
Dog.cpp \
Animal.cpp \
Brain.cpp \

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= PolyProMax

all:			$(NAME)

$(NAME):		$(OBJS) Cat.hpp Dog.hpp Animal.hpp Brain.hpp
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS) -I Cat.hpp -I Dog.hpp -I Animal.hpp -I Brain.hpp

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
