/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:59:16 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/13 23:11:18 by jmezzavilla      ###   ########.fr       */
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
