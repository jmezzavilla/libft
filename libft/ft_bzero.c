/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:51:35 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/09 22:16:11 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *p;
	size_t i;

	p = s;
	i = 0;

	while (i < n)
	{
        *p++ = 0;
        i++;
	}
}

/*int main()
{
    int str[10];
  
    ft_bzero(str, sizeof(str));

    int i;

    i = 0;

    while(i < 10)
    {
        printf("%d", str[i]);
        i++;
    }
    return (0);
}*/