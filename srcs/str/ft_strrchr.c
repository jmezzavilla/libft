/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:37:12 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/14 22:37:12 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0 && s[i] != (char)c)
		i--;
	if (i == 0 && c && (char)c != s[i])
		return (0);
	else
		return ((char *)&s[i]);
}

/*int main()
{
	char *result;
	result = ft_strrchr("jessica alves", 's');
	printf("%s", result);
}*/