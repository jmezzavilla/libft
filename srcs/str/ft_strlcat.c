/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:36:07 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/14 22:36:10 by jealves-         ###   ########.fr       */
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
    char src[] = "Jessica";
    char dest[30] = "meu nome é ";
    size_t i = ft_strlcat(dest,src,20);

    printf("%ld\n", i);
    printf("%s", dest);
}*/
