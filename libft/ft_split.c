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


static int	count_words(const char *str, char c)
{
	int i;
	int trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	int begin;
	char **split;

	split = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!s || !split)
		return (0);
	i = 0;
	j = 0;
	begin = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && begin < 0)
			begin = i;
		else if ((s[i] == c || i == ft_strlen(s)) && begin >= 0)
		{
			split[j] = ft_calloc((i - begin + 1), sizeof(char));
			ft_strlcpy(split[j], s + begin, i - begin + 1);
			begin = -1;
			j++;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

/*int	main(void)
{
	char **tab;
	unsigned int i;

	i = 0;
	tab = ft_split("ola meu nome é jessica", ' ');
	if (!tab[0])
		ft_putstr_fd("ok\n", 1);
	while (tab[i] != NULL)
	{
		ft_putstr_fd(tab[i], 1);
		write(2, "\n", 1);
		i++;
	}
}
*/