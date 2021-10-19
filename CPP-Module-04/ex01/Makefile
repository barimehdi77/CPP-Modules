# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbari <mbari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 12:40:37 by mbari             #+#    #+#              #
#    Updated: 2021/10/19 18:33:53 by mbari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the final executable files
NAME = ./Poly


# Project's directories
SRCS_FOLDER = srcs
OBJECTSDIR = objects
HEADERS_FOLDER = headers


# Name of variables
FLAGS = -Wall -Wextra -Werror
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

# Exercise files variable
SRC_FILES = Cat.cpp \
Dog.cpp \
Animal.cpp \
Brain.cpp \


# Define objects for all sources
OBJS := $(addprefix $(OBJECTSDIR)/, $(SRC_FILES:.cpp=.o))

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
	@echo "$(BLUE)█████████████████████ Making Polymorphism ██████████████████████$(RESET)"

# Phonebook making rules
$(NAME): head $(OBJS) main.o
	@$(CC) -I $(HEADERS_FOLDER) $(OBJS) $(OBJECTSDIR)/main.o -o $@

$(OBJECTSDIR)/%.o: $(SRCS_FOLDER)/%.cpp $(HEADERS_FOLDER)
	@$(MKDIR) $(dir $@)
	@echo "$(BLUE)█ $(YELLOW)Compiling$(RESET) $<:\r\t\t\t\t\t\t\t$(GREEN){DONE}$(BLUE) █$(RESET)"
	@$(CC) $(FLAGS) -I $(HEADERS_FOLDER) -o $@ -c $<

main.o: main.cpp $(HEADERS_FOLDER)
	@echo "$(BLUE)█ $(YELLOW)Compiling$(RESET) $<:\r\t\t\t\t\t\t\t$(GREEN){DONE}$(BLUE) █$(RESET)"
	@$(CC) $(FLAGS) -I $(HEADERS_FOLDER) -o $(OBJECTSDIR)/$@ -c $<

# Remove all objects, dependencies and executable files generated during the build
clean:
	@echo "$(RED)deleting$(RESET): " $(OBJECTSDIR)
	@$(RMDIR) $(OBJECTSDIR)


fclean: clean
	@echo "$(RED)deleting$(RESET): " $(NAME)
	@$(RM) $(NAME) philo.dSYM $(ERRIGNORE)

re: fclean all

# Print Credit
credit:
	@echo "┏━━━┓┏━━━┓┏━━━┓    ┏━┓┏━┓      ┏┓    ┏┓         ┏━━━┓┏┓ ┏┓"
	@echo "┃┏━┓┃┃┏━┓┃┃┏━┓┃    ┃ ┗┛ ┃      ┃┃    ┃┃         ┃┏━┓┃┃┃ ┃┃"
	@echo "┃┃ ┗┛┃┗━┛┃┃┗━┛┃    ┃┏┓┏┓┃┏━━┓┏━┛┃┏┓┏┓┃┃ ┏━━┓    ┃┃ ┃┃┃┗━┛┃"
	@echo "┃┃ ┏┓┃┏━━┛┃┏━━┛    ┃┃┃┃┃┃┃┏┓┃┃┏┓┃┃┃┃┃┃┃ ┃┏┓┃    ┃┃ ┃┃┗━━┓┃"
	@echo "┃┗━┛┃┃┃   ┃┃       ┃┃┃┃┃┃┃┗┛┃┃┗┛┃┃┗┛┃┃┗┓┃┃━┫    ┃┗━┛┃   ┃┃"
	@echo "┗━━━┛┗┛   ┗┛       ┗┛┗┛┗┛┗━━┛┗━━┛┗━━┛┗━┛┗━━┛    ┗━━━┛   ┗┛"
	@echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
	@echo "━━━━━━━━━━━━━━━┃Made with love by : \033[1;91mmbari\033[m┃━━━━━━━━━━━━━━━━"
	@echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
