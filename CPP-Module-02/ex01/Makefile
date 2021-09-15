# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbari <mbari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/15 15:50:42 by mbari             #+#    #+#              #
#    Updated: 2021/09/15 17:19:03 by mbari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp \
Fixed.cpp \

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= FixedProMax

all:			$(NAME)

$(NAME):		$(OBJS) Fixed.hpp
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS) -I Fixed.hpp

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
