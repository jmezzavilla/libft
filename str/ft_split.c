/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:34:39 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/14 22:34:39 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

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

static char	**ft_cleanup_split(char **split, size_t j)
{
	size_t	idx;

	split[j] = NULL;
	idx = 0;
	while (split[idx])
		free(split[idx++]);
	free(split);
	return (NULL);
}

char	**ft_write_words(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		start;

	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			split[j] = ft_calloc((i - start + 1), sizeof(char));
			if (!split[j])
				return (ft_cleanup_split(split, j));
			ft_strlcpy(split[j], s + start, i - start + 1);
			start = -1;
			j++;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!s || !split)
		return (0);
	return (ft_write_words(split, s, c));
}

/*int	main(void)
{
	char **tab;
	unsigned int i;

	i = 0;
	tab = ft_split("ola meu nome é", ' ');
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