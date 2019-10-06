# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nchahed <nchahed@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/10 17:42:43 by nchahed           #+#    #+#              #
#    Updated: 2019/10/06 19:44:06 by nchahed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

SRC =	ft_bzero.c		\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_memalloc.c	\
		ft_memcpy.c		\
		ft_memdel.c		\
		ft_memset.c		\
		ft_strclr.c		\
		ft_strdel.c		\
		ft_strlen.c		\
		ft_strnew.c		\
		ft_strcat.c		\
		ft_strdup.c		\
		ft_strncpy.c	\
		ft_strcpy.c		\
		ft_memcmp.c		\
		ft_memchr.c		\
		ft_memmove.c	\
		ft_memccpy.c	\
		ft_strrchr.c	\
		ft_strchr.c		\
		ft_strncat.c	\
		ft_isalnum.c	\
		ft_isprint.c	\
		ft_isascii.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strncmp.c	\
		ft_atoi.c		

OBJ = $(SRC:.c=.o)

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ) 
	ranlib $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

