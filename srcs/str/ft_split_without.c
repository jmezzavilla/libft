/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_without.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:58:53 by jealves-          #+#    #+#             */
/*   Updated: 2023/11/28 23:18:36 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	check_ignore(char *ignored_lst, char c, char *curr_ign)
{
	int	i;

	i = 0;
	if (*curr_ign == c)
	{
		*curr_ign = '\0';
	}
	else
	{
		while (ignored_lst[i])
		{
			if (ignored_lst[i] == c && *curr_ign == '\0')
				*curr_ign = c;
			i++;
		}
	}
}

static int	count_words_without(const char *str, char c, char *ignored_lst)
{
	int		i;
	int		j;
	int		trigger;
	char	curr_ign;

	i = 0;
	j = -1;
	trigger = 0;
	curr_ign = '\0';
	while (str[++j])
	{
		if (str[j] != c && trigger == 0 && curr_ign == '\0')
		{
			trigger = 1;
			i++;
		}
		else if (str[j] == c)
			trigger = 0;
		check_ignore(ignored_lst, str[j], &curr_ign);
	}
	if (curr_ign != '\0')
		i = -1;
	return (i);
}

bool	is_valid(int start, char curr_ign)
{
	if (start >= 0 && curr_ign == '\0')
		return (true);
	return (false);
}

char	**ft_write_words_without(char **split, char const *s, char c,
		char *ignored_lst)
{
	long	i;
	long	j;
	int		start;
	char	ign;

	i = -1;
	j = 0;
	start = -1;
	ign = '\0';
	while (++i <= (long)ft_strlen(s))
	{
		check_ignore(ignored_lst, s[i], &ign);
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == (long)ft_strlen(s)) && is_valid(start, ign))
		{
			split[j] = ft_calloc((i - start + 1), sizeof(char));
			if (!split[j])
				return (ft_cleanup_split(split, j));
			ft_strlcpy(split[j++], s + start, i - start + 1);
			start = -1;
		}
	}
	split[j] = 0;
	return (split);
}

char	**ft_split_without(char const *s, char c, char *ignored_lst)
{
	char	**split;
	int		count_words;

	count_words = count_words_without(s, c, ignored_lst);
	if (count_words < 0)
		return (NULL);
	split = ft_calloc((count_words + 1), sizeof(char *));
	if (!s || !split)
		return (0);
	return (ft_write_words_without(split, s, c, ignored_lst));
}
