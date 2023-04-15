# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 21:13:43 by jmezzavilla       #+#    #+#              #
#    Updated: 2023/04/14 21:13:43 by jmezzavilla      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f


FILES = ft_atoi\
		ft_bzero\
		ft_calloc\
		ft_isalnum\
		ft_isalpha\
		ft_isascii\
		ft_isdigit\
		ft_isprint\
		ft_memchr\
		ft_memcmp\
		ft_memcpy\
		ft_memmove\
		ft_memset\
		ft_strchr\
		ft_strdup\
		ft_strlcat\
		ft_strlcpy\
		ft_strlen\
		ft_strncmp\
		ft_strnstr\
		ft_strrchr\
		ft_tolower\
		ft_toupper\
		ft_substr\
		ft_strjoin\
		ft_strtrim\
		ft_strmapi\
		ft_putchar_fd\
		ft_putstr_fd\
		ft_split\

SRCS_DIR = ./

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^	

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re