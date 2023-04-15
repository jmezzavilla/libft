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

int	ft_count_words(char const *str, char c)
{
	int i;
	int words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == c || str[i + 1] == '\0') == 1 && (str[i] == c
				|| str[i] == '\0') == 0)
			words++;
		i++;
	}
	return (words);
}

int	ft_aloc_memory(char **split, int word, size_t size)
{
	split[word] = (char *)ft_calloc(size, sizeof(char));
	if (!split[word])
	{
		return (unleah(split, word - 1));
	}
	return (0);
}

int	ft_write_words(char **split, char const *str, char c)
{
	int i;
	int j;
	int word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == c || str[i] == '\0') == 1)
			i++;
		else
		{
			j = 0;
			while ((str[i + j] == c || str[i + j] == '\0') == 0)
				j++;
			if (ft_aloc_memory(split, word, j + 1) != 0)
				return (-1);
			ft_strlcpy(split[word], str + i, j + 1);
			i += j;
			word++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char **res;

	res = (char **)ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	if (ft_write_words(res, s, c) != 0)
	{
		return (NULL);
	}
	return (res);
}

/*int	main(void)
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
}*/
