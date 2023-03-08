/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:54:21 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/08 00:02:35 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size != 0)
	{
		while (count < size && src[count] != '\0')
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	return (ft_strlen(src));
}

/*int	main(void)
{
	char string[] = "Jessica";
	char buffer[10];
	int total;

	total = ft_strlcpy(buffer, string, 4);

	printf("Copied '%s' into '%s', length %d\n",
			string,
			buffer,
			total);
}*/