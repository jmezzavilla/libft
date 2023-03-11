/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:54:29 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/11 12:36:26 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

    d = (unsigned char *)dest;
	s = (unsigned const char *)src;

	if (dest == NULL && src == NULL)
		return (NULL);

	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

/*int	main(void)
{
   
    char src[] = "jessica";
    char dest [8];
    ft_memcpy(dest, src, ft_strlen(src) + 1);
    printf("%s", dest);
}*/