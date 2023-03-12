/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmezzavilla <vmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:59:06 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/12 22:25:07 by vmezzavilla      ###   ########.fr       */
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