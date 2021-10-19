# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbari <mbari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 12:40:37 by mbari             #+#    #+#              #
#    Updated: 2021/10/19 17:06:38 by mbari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp \
AMateria.cpp \
Character.cpp \
Cure.cpp \
Ice.cpp \
MateriaSource.cpp \

HEADERFILES 	= IMateriaSource.hpp \
AMateria.hpp \
Character.hpp \
Cure.hpp \
Ice.hpp \
MateriaSource.hpp \
ICharacter.hpp \

OBJS			= $(SRCS:%.cpp=%.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= PolyProMax

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERFILES)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) -I AMateria.hpp -I Character.hpp -I Cure.hpp -I Ice.hpp -I ICharacter.hpp -I MateriaSource.hpp -I IMateriaSource.hpp

%.o: %.cpp $(HEADERFILES)
				$(CXX) $(CXXFLAGS) &< -o $@

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re


# AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp MateriaSource.hpp IMateriaSource.hpp
