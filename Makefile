# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awahib <awahib@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 10:03:47 by awahib            #+#    #+#              #
#    Updated: 2023/11/27 10:06:56 by awahib           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags

CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror

# Directories

SRCS	:=	ft_printf.c\
			ft_print_format.c\
			ft_putchar.c\
			ft_putstr.c\
			ft_putnbr.c\
			ft_putnbr_u.c\
			ft_puthexa.c\
			ft_putaddr.c\


OBJS	:= ${SRCS:.c=.o}

# Target library name

NAME	:= libftprintf.a

# Commands

AR	:= ar -rc
RM	:= rm -f

# Targets

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${OBJS}

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@
	ar -crs $(NAME) $@
	
clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	
re: fclean all