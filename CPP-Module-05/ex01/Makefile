# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbari <mbari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 12:40:37 by mbari             #+#    #+#              #
#    Updated: 2021/10/23 13:06:16 by mbari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp \
Bureaucrat.cpp \
Form.cpp \

OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= Form

all:			$(NAME)

$(NAME):		$(OBJS) Bureaucrat.hpp Form.hpp
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) -I Form.hpp -I Bureaucrat.hpp

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
