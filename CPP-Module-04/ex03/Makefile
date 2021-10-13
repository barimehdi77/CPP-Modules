# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbari <mbari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 12:40:37 by mbari             #+#    #+#              #
#    Updated: 2021/10/13 14:56:34 by mbari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp \
AMateria.cpp \
Character.cpp \
Cure.cpp \
Ice.cpp \

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= PolyProMax

all:			$(NAME)

$(NAME):		$(OBJS) AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS) -I AMateria.hpp -I Character.hpp -I Cure.hpp -I Ice.hpp

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
