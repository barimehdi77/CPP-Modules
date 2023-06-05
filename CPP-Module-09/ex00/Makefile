# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: barimehdi77 <barimehdi77@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 12:40:37 by mbari             #+#    #+#              #
#    Updated: 2023/06/05 14:55:19 by barimehdi77      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Name of the final executable files
NAME = ./btc

# Project's directories
OBJECTSDIR = objects
HEADERFILE = BitcoinExchange.hpp

# Name of variables
FLAGS = -Wall -Wextra -Werror
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

# Exercise files variable
SRC_FILES = main.cpp BitcoinExchange.cpp

# Define objects for all sources
OBJS := $(SRC_FILES:.cpp=.o)

# Name the compiler
CC = c++

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
	@echo "┃┏━┓┃┃┏━┓┃┃┏━┓┃    ┃ ┗┛ s      ┃┃    ┃┃         ┃┏━┓┃┃┏━┓┃"
	@echo "┃┃ ┗┛┃┗━┛┃┃┗━┛┃    ┃┏┓┏┓┃┏━━┓┏━┛┃┏┓┏┓┃┃ ┏━━┓    ┃┃ ┃┃┃┗━┛┃"
	@echo "┃┃ ┏┓┃┏━━┛┃┏━━┛    ┃┃┃┃┃┃┃┏┓┃┃┏┓┃┃┃┃┃┃┃ ┃┏┓┃    ┃┃ ┃┃┗━━┓┃"
	@echo "┃┗━┛┃┃┃   ┃┃       ┃┃┃┃┃┃┃┗┛┃┃┗┛┃┃┗┛┃┃┗┓┃┃━┫    ┃┗━┛┃┏━━┛┃"
	@echo "┗━━━┛┗┛   ┗┛       ┗┛┗┛┗┛┗━━┛┗━━┛┗━━┛┗━┛┗━━┛    ┗━━━┛┗━━━┛"
	@echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
	@echo "━━━━━━━━━━━━━━━┃Made with love by : \033[1;91mmbari\033[m┃━━━━━━━━━━━━━━━━"
	@echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"

