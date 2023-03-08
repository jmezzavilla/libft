/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:46:49 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/08 15:20:10 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == (char)c)
			return ((char *)(s + count));
		count++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char str [] = "Mezzavilla, Jéssica.";
	const char target = 'J';

	printf("%s", ft_strchr(str, target));
}*/