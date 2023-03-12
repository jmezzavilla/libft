/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmezzavilla <vmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:59:19 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/12 22:44:14 by vmezzavilla      ###   ########.fr       */
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
	while (*p != '\0' && len >= needle_len)
	{
		if (*p == *needle && ft_strncmp(p, needle, needle_len) == 0)
			return ((char *)p);
		p++;
		len--;
	}
	return (NULL);
}