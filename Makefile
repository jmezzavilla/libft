# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 22:38:27 by jealves-          #+#    #+#              #
#    Updated: 2023/09/14 22:38:27 by jealves-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a


SRCS = \
   file/ft_putstr_fd.c\
   file/ft_putnbr_fd.c\
   file/ft_putendl_fd.c\
   file/ft_putchar_fd.c\
   \
   lst/ft_lstadd_back.c\
   lst/ft_lstadd_front.c\
   lst/ft_lstdelone.c\
   lst/ft_lstclear.c\
   lst/ft_lstiter.c\
   lst/ft_lstlast.c\
   lst/ft_lstmap.c\
   lst/ft_lstnew.c\
   lst/ft_lstsize.c\
   \
   mem/ft_bzero.c\
   mem/ft_calloc.c\
   mem/ft_memchr.c\
   mem/ft_memcmp.c\
   mem/ft_memmove.c\
   mem/ft_memcpy.c\
   mem/ft_memset.c\
   \
   nbr/ft_atoi.c\
   nbr/ft_itoa.c\
   \
   str/ft_split.c\
   str/ft_strchr.c\
   str/ft_strdup.c\
   str/ft_strjoin.c\
   str/ft_striteri.c\
   str/ft_strlcat.c\
   str/ft_strlen.c\
   str/ft_strlen_matrix.c\
   str/ft_strlcpy.c\
   str/ft_strmapi.c\
   str/ft_strnstr.c\
   str/ft_strcmp.c\
   str/ft_strncmp.c\
   str/ft_strrchr.c\
   str/ft_strtrim.c\
   str/ft_substr.c\
   str/ft_tolower.c\
   str/ft_toupper.c\
   \
   utils/ft_isalnum.c\
   utils/ft_isalpha.c\
   utils/ft_isascii.c\
   utils/ft_isdigit.c\
   utils/ft_isprint.c\
   \
   ft_printf/ft_printf.c\
   ft_printf/ft_putchar.c\
   ft_printf/ft_putnbr_base.c\
   ft_printf/ft_putpointer.c\
   ft_printf/ft_putstr.c\
   \
   get_next_line/get_next_line_utils.c\
   get_next_line/get_next_line.c\


INCLUDES = include

OBJS = $(SRCS:.c=.o)

CC= gcc
RM= rm -f

CFLAGS = -Wall -I $(INCLUDES) -Wextra -Werror

.c.o: 
	$(CC) $(CFLAGS) -g -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
				ar rcs $(NAME) $(OBJS)


all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all