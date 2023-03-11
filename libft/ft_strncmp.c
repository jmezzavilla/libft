/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmezzavilla <vmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:59:16 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/11 19:45:27 by vmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	while (s1[count] == s2[count] && (count <= n))
	{
		count++;
	}
	return (s1[count] - s2[count]);
}

int	main(void)
{
	char *str1 = "abcdefgh";
	char *str2 = "abcdwxyz";

	printf("%d\n", strncmp(str1, str2, 4));
	printf("%d", ft_strncmp(str1, str2, 4));
}