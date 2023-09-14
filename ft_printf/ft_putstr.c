/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:48:04 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/04/22 12:40:45 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		count += ft_putstr("(null)");
	else
	{
		while (*str)
		{
			count += ft_putchar(*str);
			str++;
		}
	}
	return (count);
}

/* int main()
{
    int count;
    count = ft_putstr("jessica");
    printf("%d", count);
} */