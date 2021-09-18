# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbari <mbari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 12:40:37 by mbari             #+#    #+#              #
#    Updated: 2021/09/18 15:44:54 by mbari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp \
ClapTrap.cpp \
ScavTrap.cpp \
FragTrap.cpp \

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= ClapTrapPro

all:			$(NAME)

$(NAME):		$(OBJS) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS) -I ClapTrap.hpp -I ScavTrap.hpp -I FragTrap.hpp

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
