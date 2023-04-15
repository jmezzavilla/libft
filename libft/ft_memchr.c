/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:59:06 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/04/15 20:23:28 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				count;

	p = s;
	count = 0;
	while (n--)
	{
		if ((unsigned char)p[count] == (unsigned char)c)
		{
			return ((void *)(p + count));
		}
		count++;
	}
	return (0);
}

/*int main()
{
	char str[] = "jessica";
	char *result;

	result = ft_memchr(str, 'i', 8);
	printf("%s", result);
}*/