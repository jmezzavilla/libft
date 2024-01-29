/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:35:11 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/14 22:35:13 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count] != (char)c)
	{
		if (s[count] == '\0')
			return (NULL);
		count++;
	}
	return ((char *)(s + count));
}

/*int	main(void)
{
	const char str [] = "Mezzavilla, Jéssica.";
	const char target = 'J';

	printf("%s", ft_strchr(str, target));
}*/