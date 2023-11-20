# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 10:24:43 by jade-car          #+#    #+#              #
#    Updated: 2023/11/18 11:05:53 by jade-car         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#========================== COLORS =================================
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
PURPLE = \033[1;35m
CYAN = \033[1;36m
WHITE = \033[1;37m
RESET = \033[0m

#========================== EXECUTABLE NAME FILE ===================
NAME = libftprintf.a

#========================== COMPILER ===============================
CC = cc

#========================== CFLAGS =================================
CFLAGS = -Werror -Wextra -Wall

#========================== SOURCE =================================
SRC = ft_char.c ft_hexadec.c \
		ft_string.c ft_unsigned.c \
		ft_interger.c ft_printf.c ft_pointer.c

#========================== LIBRARY ===============================
HEADER = libftprintf.h

#========================== TARGETS ===============================
## FILES.c/.h TO FILES.o
OBJS = $(SRC:.c=.o)

#========================== BONUS =================================
#SRC_BONUS =

#========================== ARCHIVES.h ============================
## 'AR' COMMAND TO CREATE LIBRARIES
## '-s' CREATES AN INDEX
AR = ar

#========================== REMOVE ================================
## DELETE FILES
REMOVE = rm -f

#========================== TARGETS ===============================
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)
	@echo "$(CYAN)PRINTF: $(CYAN)🖨️ THIS PRINTS GOOOOD! 👍$(RESET)"

%.o: %.c $(HEADER) 
	cc $(CFLAGS) -I $(HEADER) -c $< -o $@

## DELETE ALL FILES.O
clean:
	$(REMOVE) $(OBJS)

## REMOVE ALL .o and .a 
fclean: clean
	$(REMOVE) $(NAME)

## REBUILD ALL FILES. \
	DELETE THE TARGET FILES AND COMPILE AGAIN
re: fclean all

## DISPLAYS AN INDEX WITH ALL CONTENT INSIDE THE FUNCTIONS
index: $(NAME)
	ranlib -s $(NAME)

## DEBUGGER OPTIONS
debug: $(NAME)
	$(CC) -g -o $(NAME) $(OBJS)

## AVOID RUNNING FILES WITH THE SAME NAME AS THE TARGETS
.PHONY: all clean fclean re index debug 
