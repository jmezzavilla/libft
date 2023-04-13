/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:59:22 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/14 17:48:04 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	count;

	count = ft_strlen(s);
	if (c == '\0')
		return ((char *) s + count);
	while (count--)
	{
		if (s[count] == (char)c)
		{
			return ((char *)(s + count));
		}
	}
	return (NULL);
}

/*int	main(void)
{
	const char str[] = "teste";
	const char target = '\0';

	printf("%s", ft_strrchr(str, target));
	printf("%s", strrchr(str, target));
}*/