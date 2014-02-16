# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 16:28:30 by mbacoux           #+#    #+#              #
#    Updated: 2013/11/21 19:18:13 by mbacoux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -I./
SOURCE = memset.c bzero.c memcpy.c memccpy.c memmove.c memchr.c memcmp.c \
		 strlen.c strdup.c strcpy.c strncpy.c strcat.c strncat.c strlcat.c \
		 strchr.c strrchr.c strstr.c strnstr.c strcmp.c strncmp.c atoi.c \
		 isalpha.c isdigit.c isalnum.c isascii.c isprint.c toupper.c \
		 tolower.c
OBJ = $(SOURCE:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

