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

PROJECT = libft

SRCDIR	= srcs
OBJDIR	= objs

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
   lst/ft_lstdelfirst.c\
   lst/ft_lstdellast.c\
   lst/ft_lstIdx.c\
   \
   mem/ft_bzero.c\
   mem/ft_calloc.c\
   mem/ft_realloc.c\
   mem/ft_memchr.c\
   mem/ft_memcmp.c\
   mem/ft_memmove.c\
   mem/ft_memcpy.c\
   mem/ft_memcat.c\
   mem/ft_memset.c\
   mem/ft_swap_mem.c\
   mem/ft_memcat.c\
   \
   nbr/ft_atoi.c\
   nbr/ft_atol.c\
   nbr/ft_atoll.c\
   nbr/ft_itoa.c\
   \
   str/ft_split_without.c\
   str/ft_split.c\
   str/ft_strchr.c\
   str/ft_strdup.c\
   str/ft_strjoin.c\
   str/ft_striteri.c\
   str/ft_strlcat.c\
   str/ft_strlen.c\
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
   str/ft_strrep.c\
   \
   utils/ft_isalnum.c\
   utils/ft_isalpha.c\
   utils/ft_isascii.c\
   utils/ft_isdigit.c\
   utils/ft_isprint.c\
   utils/ft_swap.c\
   utils/ft_isnumber.c\
   \
   ft_printf/ft_printf.c\
   ft_printf/ft_printf_utils.c\
   \
   ft_dprintf/ft_dprintf.c\
   ft_dprintf/ft_dprintf_utils.c\
   \
   get_next_line/get_next_line_bonus.c\

INCLUDES = include

SRCS		:= $(addprefix srcs/,$(SRCS))

OBJS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))

CC= gcc
RM= @rm -f

CFLAGS = -I $(INCLUDES) -Wall -Wextra -Werror -g #-fsanitize=address

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@   

$(NAME): $(OBJS)         
	@ar -rcs $(NAME) $(OBJS)
	@printf "\n$(BLUE)$(PROJECT)$(END) $(GREEN)Stuff compiled 🛠️\n$(END)"

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR) $(LIB)
	@mkdir -p $(@D)
	@cc $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

all:	$(NAME)

clean :
	$(RM) $(OBJDIR)/*.o

fclean :
	$(RM) $(NAME)
	@$(RM)r objs
	@printf "\n$(BLUE)$(PROJECT)$(END) $(GREEN)All stuff removed 🗑️\n$(END)"

re: fclean all

### COLORS ###

RED = \033[0;31m
GREEN = \033[0;92m
YELLOW = \033[93m
BLUE = \033[0;34m
MAGENTA = \033[0;35m
CYAN = \033[96m
END = \033[0m