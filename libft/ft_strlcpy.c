/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmezzavilla <vmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:54:21 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/04/13 19:32:39 by vmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t count;

	count = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size != 0)
	{
		while (count < (size - 1) && src[count] != '\0')
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	return (ft_strlen(src));
}