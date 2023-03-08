/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:59:22 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/08 15:23:23 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
    while (count >= 0)
    {
        if (s[count] == (char)c)
        {
	        return ((char *)(s + count));
        }
        count--;
    }
	return (NULL);
}

/*int	main(void)
{
	const char str [] = "Jasmim Jéssica.";
	const char target = 'J';

	printf("%s", ft_strrchr(str, target));
}*/