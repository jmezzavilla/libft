/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmezzavilla <vmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:46:49 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/11 19:33:59 by vmezzavilla      ###   ########.fr       */
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