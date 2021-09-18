# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbari <mbari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 12:40:37 by mbari             #+#    #+#              #
#    Updated: 2021/09/18 15:22:14 by mbari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp \
ClapTrap.cpp \

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= ClapTrapMini

all:			$(NAME)

$(NAME):		$(OBJS) ClapTrap.hpp
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS) -I ClapTrap.hpp

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
