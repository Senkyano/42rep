# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 13:00:39 by rihoy             #+#    #+#              #
#    Updated: 2023/11/16 14:29:25 by rihoy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_calloc.c \
	ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS =	ft_lstadd_front.c ft_lstnew.c ft_lstadd_back.c \
	ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
	ft_lstlast.c ft_lstmap.c ft_lstsize.c

CC = cc
NAME = libft.a
OBJS = ${SRCS:.c=.o}
BONUS_OBJ = ${BONUS:.c=.o}
FLAGS = -Wall -Werror -Wextra -I

all : ${NAME}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}

bonus : ${OBJS} ${BONUS_OBJ}
	ar rc ${NAME} ${OBJS} ${BONUS_OBJ}

clean :
	rm -f ${OBJS} ${BONUS_OBJ}

fclean :
	rm -f ${NAME}

re : fclean all