/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:36:50 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/14 22:36:54 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	if (n == 0)
		return (0);
	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		if (count < (n - 1))
			count++;
		else
			return (0);
	}
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}

/*int main()
{
	int result;
	result = ft_strncmp("Jessica", "jessica", 7);
	printf("%d", result);
}*/