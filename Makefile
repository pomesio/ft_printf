# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 14:22:40 by jade-car          #+#    #+#              #
#    Updated: 2023/10/14 14:22:48 by jade-car         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#========================== COLORS =================================
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
CYAN = \033[1;36m
RESET = \033[0m

#========================== EXECUTABLE NAME FILE ===================
NAME = libftprintf.a

#========================== COMPILER ===============================
CC = cc

#========================== CFLAGS =================================
CFLAGS = -Werror -Wextra -Wall

#========================== SOURCE =================================
## LOOK UP FOR FILES.c
SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c

#========================== LIBRARY ===============================
HEADER = libftprintf.h

#========================== TARGETS ===============================
## FILES.c/.h TO FILES.o
#OBJS = $(SRC)
OBJS = $(SRC:.c=.o)

#========================== BONUS =================================
#SRC_BONUS =

#========================== ARCHIVES.h ============================
## 'AR' COMMAND TO CREATE LIBRARIES
AR = ar -rcs

#========================== REMOVE ================================
## DELETE FILES
REMOVE = rm -f

#========================== RULES =================================
all: $(NAME)

## COMPILE FILES.c IN A EXECUTABLE NAMED 'libftprintf.a'
${NAME}:	${OBJS}
		@echo "✨😎It's compiling... just a sec. ✨"
		@ar rcs ${NAME} ${OBJS}
		@printf "${GREEN}LIBFT: ${PURPLE}🎉Congrats it works🥳!${RESET}"

%.o: %.c $(HEADER) 
	cc $(CFLAGS) -I $(HEADER) -c $< -o $@

## DELETE ALL TARGET FILES.o
clean:
	$(REMOVE) ${OBJS}

## REMOVE ALL .o && EXECUTABLE 
fclean: clean
	$(REMOVE) $(NAME)

## REBUILD ALL FILES. \
	DELETE THE TARGET FILES AND COMPILE AGAIN
re: fclean all

## DEBUGGER OPTIONS
debug: $(NAME)
	$(CC) -g $(NAME)

## AVOID RUNNING FILES WITH THE SAME NAME AS THE RULES
.PHONY: all clean fclean re debug
