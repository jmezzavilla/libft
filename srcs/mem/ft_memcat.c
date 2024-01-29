/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:36:07 by jealves-          #+#    #+#             */
/*   Updated: 2023/11/29 09:57:11 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcat(void *v1, void *v2)
{
	size_t	len;
	size_t	i;
	char	*s2;
	char	*dest;

	i = 0;
	s2 = (char *)v2;
	len = ft_strlen((char *)v1) + ft_strlen(s2);
	dest = ft_calloc(len, sizeof(v1));
	len = ft_strlen((char *)v1);
	ft_memcpy(dest, (char *)v1, len);
	while (i <= ft_strlen(s2))
	{
		dest[len] = s2[i];
		i++;
		len++;
	}
	free((char *)v1);
	return (dest);
}
