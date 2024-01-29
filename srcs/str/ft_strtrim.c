/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:37:22 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/14 22:37:26 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	start;
	size_t	end;

	newstr = NULL;
	if (s1 && set)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && start < end && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && end > start && ft_strchr(set, s1[end - 1]))
			end--;
		newstr = (char *)malloc(sizeof(char) * (end - start + 1));
		if (newstr)
			ft_strlcpy(newstr, s1 + start, (end - start + 1));
	}
	return (newstr);
}

/*int	main(void)
{
	char *s1 = "  jessica  ";
	char *set = " ";
	char *trimmed_str = ft_strtrim(s1, set);
	printf("'%s' -> '%s'\n", s1, trimmed_str);
	free(trimmed_str);
}*/