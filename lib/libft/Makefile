# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 16:28:30 by mbacoux           #+#    #+#              #
#    Updated: 2014/02/17 18:59:43 by mbacoux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re, fast

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -pedantic -I./
SOURCE = memset.c bzero.c memcpy.c memccpy.c memmove.c memchr.c memcmp.c \
		 strlen.c strdup.c strcpy.c strncpy.c strcat.c strncat.c strlcat.c \
		 strchr.c strrchr.c strstr.c strnstr.c strcmp.c strncmp.c atoi.c \
		 isalpha.c isdigit.c isalnum.c isascii.c isprint.c toupper.c \
		 tolower.c memalloc.c memdel.c strnew.c strdel.c strclr.c \
		 striter.c striteri.c strmap.c strmapi.c strequ.c strnequ.c \
		 strsub.c strjoin.c strtrim.c strsplit.c itoa.c putchar.c putstr.c \
		 putendl.c putnbr.c putchar_fd.c putstr_fd.c putendl_fd.c \
		 putnbr_fd.c lstnew.c lstdelone.c lstdel.c lstadd.c lstiter.c \
		 lstmap.c
OBJ = $(SOURCE:.c=.o)

ifeq ($(FAST), 1)
	CFLAGS := -O3 $(CFLAGS)
else
	CFLAGS := -O2 $(CFLAGS)
endif


all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

ifeq ($(FAST), 1)

%.o : %_fast.c
	$(CC) $(CFLAGS) -c $< -o $@

endif

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

fast:
	@make -C . FAST=1

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

