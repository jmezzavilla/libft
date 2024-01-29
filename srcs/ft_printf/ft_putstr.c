/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:28:47 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/14 22:28:50 by jealves-         ###   ########.fr       */
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