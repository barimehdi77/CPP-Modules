# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbari <mbari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 12:40:37 by mbari             #+#    #+#              #
#    Updated: 2021/11/11 14:50:06 by mbari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Name of the final executable files
NAME = ./Array

# Project's directories
OBJECTSDIR = objects
HEADERFILE = Array.hpp

# Name of variables
FLAGS = -Wall -Wextra -Werror
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

# Exercise files variable
SRC_FILES = main.cpp

# Define objects for all sources
OBJS := $(SRC_FILES:.cpp=.o)

# Name the compiler
CC = clang++

# OS specific part
RM = rm -rf
RMDIR = rm -rf
MKDIR = mkdir -p
MAKE = make -C
ECHO = /bin/echo
ERRIGNORE = 2>/dev/null

all: credit $(NAME)
	@echo "$(BLUE)██████████████████████ Compiling is DONE ███████████████████████$(RESET)"
	@echo "         Made with love by : \033[1;91mmbari\033[m"

head:
	@echo "$(BLUE)█████████████████████████ Making Files █████████████████████████$(RESET)"

# making rules
$(NAME): head $(HEADERFILE) $(OBJS)
	@$(CC) -I $(HEADERFILE) $(OBJS) -o $@

main.o: main.cpp $(HEADERFILE)
	@$(MKDIR) $(dir $@)
	@echo "$(BLUE)█ $(YELLOW)Compiling$(RESET) $<:\r\t\t\t\t\t\t\t$(GREEN){DONE}$(BLUE) █$(RESET)"
	@$(CC) $(FLAGS) -I $(HEADERFILE) -o $@ -c $<

# Remove all objects, dependencies and executable files generated during the build
clean:
	@echo "$(RED)deleting$(RESET): " objects
	@$(RMDIR) $(OBJS)


fclean: clean
	@echo "$(RED)deleting$(RESET): " $(NAME)
	@$(RM) $(NAME) $(ERRIGNORE)

re: fclean all

# Print Credit
credit:
	@echo "┏━━━┓┏━━━┓┏━━━┓    ┏━┓┏━┓      ┏┓    ┏┓         ┏━━━┓┏━━━┓"
	@echo "┃┏━┓┃┃┏━┓┃┃┏━┓┃    ┃ ┗┛ ┃      ┃┃    ┃┃         ┃┏━┓┃┃┏━┓┃"
	@echo "┃┃ ┗┛┃┗━┛┃┃┗━┛┃    ┃┏┓┏┓┃┏━━┓┏━┛┃┏┓┏┓┃┃ ┏━━┓    ┃┃ ┃┃┗┛┏┛┃"
	@echo "┃┃ ┏┓┃┏━━┛┃┏━━┛    ┃┃┃┃┃┃┃┏┓┃┃┏┓┃┃┃┃┃┃┃ ┃┏┓┃    ┃┃ ┃┃  ┃┏┛"
	@echo "┃┗━┛┃┃┃   ┃┃       ┃┃┃┃┃┃┃┗┛┃┃┗┛┃┃┗┛┃┃┗┓┃┃━┫    ┃┗━┛┃  ┃┃ "
	@echo "┗━━━┛┗┛   ┗┛       ┗┛┗┛┗┛┗━━┛┗━━┛┗━━┛┗━┛┗━━┛    ┗━━━┛  ┗┛ "
	@echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
	@echo "━━━━━━━━━━━━━━━┃Made with love by : \033[1;91mmbari\033[m┃━━━━━━━━━━━━━━━━"
	@echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
