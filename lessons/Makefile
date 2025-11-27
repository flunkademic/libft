# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laraus <laraus@student.lisboa42.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/06 14:10:08 by laraus            #+#    #+#              #
#    Updated: 2025/11/27 17:56:45 by laraus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 
CFLAGS = -Wall -Werror -Wextra -g

NAME = libft.a
SRCS = ft_atoi.c ft_itoa.c ft_putchar_fd.c ft_strjoin.c	ft_strtrim.c ft_bzero.c ft_putendl_fd.c ft_strlcat.c ft_substr.c ft_calloc.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c ft_isalnum.c ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_toupper.c ft_isalpha.c ft_memcmp.c ft_split.c ft_strmapi.c ft_isascii.c ft_memcpy.c ft_strchr.c ft_strncmp.c ft_isdigit.c ft_memmove.c ft_strdup.c ft_strnstr.c ft_isprint.c ft_memset.c ft_striteri.c ft_strrchr.c
OBJS = $(SRCS:.c=.o)

BONUS_SRCS = ft_lstnew.c
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re