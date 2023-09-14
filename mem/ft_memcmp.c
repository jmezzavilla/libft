/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:33:34 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/14 22:33:36 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				count;

	p1 = s1;
	p2 = s2;
	count = 0;
	while (count < n)
	{
		if (p1[count] != p2[count])
		{
			return (p1[count] - p2[count]);
		}
		count++;
	}
	return (0);
}

/*int	main(void)
{
	char s1[] = "Jessica";
	char s2[] = "jessica";

	printf("%d\n", ft_memcmp(s1, s2, 7));
    printf("%d", memcmp(s1, s2, 7));
}*/