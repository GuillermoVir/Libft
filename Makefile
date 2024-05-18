# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guvalenz <guvalenz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 19:04:57 by hvalenzu          #+#    #+#              #
#    Updated: 2024/05/18 16:32:06 by guvalenz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
AR = ar -crs
RM = rm -f

SRC = ft_isalpha.c ft_atoi.c ft_isdigit.c ft_isascii.c ft_toupper.c ft_tolower.c ft_isalnum.c ft_isprint.c \
ft_memset.c ft_strlen.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strrchr.c ft_strncmp.c \
ft_memchr.c ft_memcmp.c ft_strchr.c ft_strnstr.c \
ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_itoa.c ft_split.c 

OBJS = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror -g3

INCLUDE = libft.h

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME) $(BONUS_NAME)

re: fclean all


