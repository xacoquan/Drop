# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbacoux <mbacoux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 16:28:30 by mbacoux           #+#    #+#              #
#    Updated: 2014/02/22 19:20:58 by mbacoux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, mrproper, re, fast

CC = clang
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -pedantic -I./ -Xclang -fcolor-diagnostics
SOURCE = memset.c bzero.c memcpy.c memccpy.c memmove.c memchr.c memcmp.c \
		 strlen.c strdup.c strcpy.c strncpy.c strcat.c strncat.c strlcat.c \
		 strchr.c strrchr.c strstr.c strnstr.c strcmp.c strncmp.c atoi.c \
		 isalpha.c isdigit.c isalnum.c isascii.c isprint.c toupper.c \
		 tolower.c memalloc.c memdel.c strnew.c strdel.c strclr.c \
		 striter.c striteri.c strmap.c strmapi.c strequ.c strnequ.c \
		 strsub.c strjoin.c strtrim.c strsplit.c itoa.c putchar.c putstr.c \
		 putendl.c putnbr.c putchar_fd.c putstr_fd.c putendl_fd.c \
		 putnbr_fd.c lstnew.c lstdelone.c lstdel.c lstadd.c lstiter.c \
		 lstmap.c realloc.c get_line.c

OBJ = $(SOURCE:.c=.o)


ifeq ($(FAST), 1)
	CFLAGS := -O3 $(CFLAGS)
else
	CFLAGS := -O2 $(CFLAGS)
endif


all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[35;1m• \033[0mCreating archive $@ ...\033[55G\c"
	@export result=`ar rcs $@ $(OBJ) 2>&1` ; \
	if [ "$$result" = "" ] ; then \
		echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m" ; \
	else \
		echo "\033[37;1m[\033[31mFAIL\033[37m]\033[0m" ; \
		echo "\n$$result" ; \
		exit 1 ; \
	fi

ifeq ($(FAST), 1)

%.o : %_fast.c libft.h
	@echo "\033[35;1m• \033[0mCreating object file $@ ...\033[55G\c"
	@export result=`$(CC) $(CFLAGS) -c $< -o $@ 2>&1` ; \
	if [ "$$result" = "" ] ; then \
		echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m" ; \
	else \
		echo "\033[37;1m[\033[31mFAIL\033[37m]\033[0m" ; \
		echo "\n$$result" ; \
		exit 1 ; \
	fi
endif


%.o : %.c libft.h
	@echo "\033[35;1m• \033[0mCreating object file $@ ...\033[55G\c"
	@export result=`$(CC) $(CFLAGS) -c $< -o $@ 2>&1` ; \
	if [ "$$result" = "" ] ; then \
		echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m" ; \
	else \
		echo "\033[37;1m[\033[31mFAIL\033[37m]\033[0m" ; \
		echo "\n$$result" ; \
		exit 1 ; \
	fi

fast:
	@make -C . FAST=1

clean :
	@echo "\033[35;1m• \033[0mRemoving object files ...\033[55G\c"
	@rm -rf $(OBJ)
	@echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m"

fclean : clean
	@echo "\033[35;1m• \033[0mRemoving $(NAME) ...\033[55G\c"
	@rm -rf $(NAME)
	@echo "\033[37;1m[\033[32mOK !\033[37m]\033[0m"

mrproper: fclean

re : fclean all

