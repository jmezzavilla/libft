/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:51:15 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/04/17 21:15:05 by jmezzavilla      ###   ########.fr       */
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