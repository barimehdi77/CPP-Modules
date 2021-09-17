# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbari <mbari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/17 18:33:39 by mbari             #+#    #+#              #
#    Updated: 2021/09/17 18:34:17 by mbari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= tests.cpp \
Account.cpp \

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= Account

all:			$(NAME)

$(NAME):		$(OBJS) Account.hpp
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS) -I Account.hpp

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
