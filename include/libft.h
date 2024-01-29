/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:03:59 by jealves-          #+#    #+#             */
/*   Updated: 2024/01/11 14:26:16 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

enum				e_type
{
	NONE,
	BUILT_IN,
	WORD,
	PIPE,
	REDIRECT_IN,
	REDIRECT_OUT,
	REDIRECT_IN_D,
	REDIRECT_OUT_D
};

typedef struct s_list
{
	char			*str;
	char			**cmds;
	bool			token;
	enum e_type		type;
	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

void				free_strs(char **strs);
int					prt(const char *format, ...);
void				ft_putchar_c(char c, long *ptr);
void				ft_putstr_c(char *s, long *ptr);
void				ft_putnbr_c(long n, long *ptr);

int					dprt(int fd, const char *format, ...);
void				ft_dputchar_c(char c, long *ptr, int fd);
void				ft_dputstr_c(char *s, long *ptr, int fd);
void				ft_dputnbr_c(long n, long *ptr, int fd);

char				*get_next_line(int fd);

size_t				ft_strlen(const char *str);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
void				ft_strcat_gnl(char *dest, char *src);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
void				ft_strcpy_gnl(char *dest, char *src);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
bool				ft_strcmpold(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strdup(const char *s);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
char				*ft_strrep(char **str, size_t from, size_t len, char *rep);

int					ft_atoi(const char *nptr);
long				ft_atol(const char *nptr);
long long			ft_atoll(const char *nptr);

char				*ft_strdup(const char *s);
void				*ft_calloc(size_t nmemb, size_t size);
void				*ft_realloc(void *ptr, size_t new_size);

void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcat(void *v1, void *v2);

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isnumber(char *str);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

// chapter two

void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoin_gnl(char *dest, char *src);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				**ft_split(char const *s, char c);
char				**ft_split_without(char const *s, char c,
						char *ignored_lst);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_itoa(int n);

// bonus

void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst);
void				ft_lstdelfirst(t_list **lst);
void				ft_lstdellast(t_list **lst);
void				ft_lstdelone(t_list *lst);
t_list				*ft_lstidx(t_list *lst, int idx);
void				ft_lstiter(t_list *lst, void (*f)(t_list *));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *));

t_list				*ft_lstnew(char *str,
						char **cmds, enum e_type type, bool token);
int					ft_lstsize(t_list *lst);

char				**ft_cleanup_split(char **split, size_t j);
void				ft_swap(int *a, int *b);
void				*ft_swap_mem(void *a, void *b, size_t size);

#endif
