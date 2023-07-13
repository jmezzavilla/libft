/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:59:10 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/07/07 22:18:34 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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