/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:48:10 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/08 17:30:30 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include<ctype.h>
#include<string.h>

#include<stdlib.h>
#include<stdio.h>


size_t ft_strlen(const char *str);
size_t ft_strlcat(char *dest, const char *src, size_t size);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strdup(const char *s);
char *ft_strnstr(const char *big, const char *little, size_t len);



int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);




#endif