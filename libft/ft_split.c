/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/03/11 17:50:45 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/04/13 23:36:59 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int	unleah(char **str, int size)
{
	while (size--)
		free(str[size]);
	return (-1);
}

int	ft_total_words(char const *s, char c)
{
	int words;

	words = 0;
	while (*s)
	{
		if ((*s == c || *s + 1 == '\0') && (*s == c || *s == '\0'))
			words++;
		s++;
	}
	return (words);
}

int	ft_write_words(char **split, char const *str, char c)
{
	const char *start;
	const char *p;
	int word;
	int len;

	start = str;
	word = 0;
	while (*str)
	{
		if ((*str == c || *str == '\0'))
		{
			str++;
			start = str;
		}
		else
		{
			p = start;
			while (*p != '\0' && *p != c)
			{
				p++;
			}
			len = p - start;
			split[word] = (char *)ft_calloc(len + 1, sizeof(char));
			if (!split[word])
			{
				return (unleah(split, word - 1));
			}
			ft_strlcpy(split[word], start, len + 1);
			str = p;
			word++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char **res;
	int words;

	words = ft_total_words(s, c);

	res = (char **)ft_calloc(words + 1, sizeof(char *));
	if (!res)
		return (NULL);
	if (ft_write_words(res, s, c) != 0)
	{
		return (NULL);
	}
	return (res);
}

int	main(void)
{
	char **tab;
	unsigned int i;

	i = 0;
	tab = ft_split("ola meu nome e jessica", ' ');
	if (!tab[0])
		ft_putstr_fd("ok\n", 1);
	while (tab[i] != NULL)
	{
		ft_putstr_fd(tab[i], 1);
		write(2, "\n", 1);
		i++;
	}
}
