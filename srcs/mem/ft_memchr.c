/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:33:29 by jealves-          #+#    #+#             */
/*   Updated: 2023/11/09 11:42:59 by analexan         ###   ########.fr       */
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
			return ((void *)(p + count));
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