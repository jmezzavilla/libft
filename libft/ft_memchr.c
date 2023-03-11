/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:59:06 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/11 18:24:29 by jmezzavilla      ###   ########.fr       */
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
		if (p[count] == c)
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
    char *ptr;
    char *ptr2;

    ptr = ft_memchr(str, 'i', ft_strlen(str));
    printf("%s\n", ptr);

    ptr2 = memchr(str, 'i', ft_strlen(str));
    printf("%s", ptr2);
}*/