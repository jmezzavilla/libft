/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:54:17 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/11 18:23:15 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	count_src;
	size_t	count_dest;
	size_t	result;

	if (size <= ft_strlen(dest))
		result = ft_strlen(src) + size;
	else
		result = ft_strlen(dest) + ft_strlen(src);
	count_dest = ft_strlen(dest);
	count_src = 0;
	while (src[count_src] != '\0' && count_dest + 1 < size)
	{
		dest[count_dest] = src[count_src];
		count_src++;
		count_dest++;
	}
	dest[count_dest] = '\0';
	return (result);
}

/*int main()
{
    char src[] = "efgh";
    char dest[] = "abc";
    size_t i = ft_strlcat(dest,src,8);

    printf("%ld", i);
    printf("%s", dest);
}*/