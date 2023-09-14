/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:33:59 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/14 22:34:03 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		*p++ = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int main()
{
    char str[50] = "Jessica Alves Mezzavilla";
  
    ft_memset(str + 24, '!', 8*sizeof(char));
    printf("%s", str);
}*/