/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmezzavilla <vmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:50:45 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/04/13 23:36:59 by vmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	words;

	words = 1;
	if (s)
	{
		while (*s)
		{
			if (*s == c)
				words++;
			s++;
		}
	}
	return (words);
}

void	ft_write_words(char **split, char const *str, char c)
{
	const char	*start;
	const char	*p;
	int			word;
	int			len;

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
			ft_strlcpy(split[word], start, len + 1);
			split[word][len + 1] = '\0';
			str = p;
			word++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	res = (char **)ft_calloc(ft_count_words(s, c), sizeof(char *));
	if (!res)
		return (NULL);
	ft_write_words(res, s, c);
	return (res);
}

/*int	main(void)
{
	char			**tab;
	unsigned int	i;

	i = 0;
	tab = ft_split("Ola meu nome é Jessica ", ' ');
	if (!tab[0])
		ft_putstr_fd("ok\n", 1);
	while (tab[i] != NULL)
	{
		ft_putstr_fd(tab[i], 1);
		write(2,"\n",1);
		i++;
	}
}*/
