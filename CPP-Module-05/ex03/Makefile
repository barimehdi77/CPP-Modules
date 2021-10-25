# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbari <mbari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 12:40:37 by mbari             #+#    #+#              #
#    Updated: 2021/10/25 17:17:41 by mbari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp \
Bureaucrat.cpp \
Form.cpp \
ShrubberyCreationForm.cpp \
RobotomyRequestForm.cpp \
PresidentialPardonForm.cpp \
Intern.cpp \

OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME			= Bureaucrat

all:			$(NAME)

$(NAME):		$(OBJS) Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS) -I RobotomyRequestFor.hpp -I Intern.hpp -I Form.hpp -I ShrubberyCreationForm.hpp -I Bureaucrat.hpp -I PresidentialPardonForm.hpp

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)
				$(RM) *_shrubbery

re:				fclean $(NAME)

.PHONY:			all clean fclean re
