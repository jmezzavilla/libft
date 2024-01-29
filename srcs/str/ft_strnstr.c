/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:36:58 by jealves-          #+#    #+#             */
/*   Updated: 2023/11/09 11:52:33 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		needle_len;
	const char	*p;

	needle_len = ft_strlen(needle);
	p = haystack;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*p && len >= needle_len)
	{
		if (*p == *needle && ft_strncmp(p, needle, needle_len) == 0)
			return ((char *)p);
		p++;
		len--;
	}
	return (NULL);
}

/*int main()
{
	char *result;
	result = ft_strnstr("meu nome é jessica", "nom", 7);
	printf("%s", result);
}*/
