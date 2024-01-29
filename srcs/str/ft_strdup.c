/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:35:36 by jealves-          #+#    #+#             */
/*   Updated: 2023/11/10 16:15:52 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;

	dest = ft_calloc(1, ft_strlen(s) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s, ft_strlen(s) + 1);
	return (dest);
}

/*int main(void)
{
	char *src;
	char *dest;

	src = "Jessica";
	printf("src = %s\n", src);
	dest = ft_strdup(src);
	printf("dest = %s\n", dest);
	free(dest);
}*/