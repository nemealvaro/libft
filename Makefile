# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 19:50:19 by aneme             #+#    #+#              #
#    Updated: 2024/10/10 18:24:56 by aneme            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
INCLUDE = libft.h

RED    = \033[0;31m
GREEN  = \033[0;32m
YELLOW = \033[0;33m
BLUE   = \033[0;34m
PURPLE = \033[0;35m
RESET  = \033[0m

SRCS = ft_atoi.c ft_bzero.c \
       ft_calloc.c \
       ft_isalnum.c \
       ft_isalpha.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isprint.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_memset.c \
       ft_strchr.c \
       ft_strdup.c \
       ft_strlcat.c \
       ft_strlcpy.c \
       ft_strlen.c \
       ft_strncmp.c \
       ft_strnstr.c \
       ft_strrchr.c \
       ft_substr.c \
       ft_tolower.c \
       ft_toupper.c \
       ft_substr.c \
       ft_striteri.c \
       ft_strmapi.c \
       ft_strjoin.c \
       ft_itoa.c \
       ft_strtrim.c \
       ft_putchar_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \
       ft_putstr_fd.c \
       ft_split.c \

#BNS_SRCS = 

OBJS = $(SRCS:.c=.o)

#BNS_OBJS = $(BNS_SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(GREEN)FILE: 		OK$(RESET)"
	
%.o: %.c
	@echo "$(BLUE)Compiling... $(YELLOW) $< $(RESET)" 
	@$(CC) $(FLAGS) -c $< -o $@ 

#bonus: $(NAME)
#	@cc $(FLAGS) -c $(BNS_SRCS) -I ./
#	@ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(BNS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all