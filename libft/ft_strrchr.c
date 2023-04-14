/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: vmezzavilla <vmezzavilla@student.42.fr>    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/03/07 13:59:22 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/04/13 19:57:24 by vmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s);
	while (i > 0 && s[i] != (char)c)
		i--;
	if (i == 0 && c != '\0' && (char)c != s[i])
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