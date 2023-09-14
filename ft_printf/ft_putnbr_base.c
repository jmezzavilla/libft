/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jessicamezzavilla@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:09:51 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/04/23 17:35:56 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *c)
{
	int	count;

	count = 0;
	while (c[count])
		count++;
	return (count);
}

int	ft_putnbr_base(long int n, char *base)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		n *= -1;
	}
	count += ft_putnbr_base_us(n, base);
	return (count);
}

int	ft_putnbr_base_us(unsigned long int n, char *base)
{
	int		count;
	size_t	size_base;

	size_base = ft_strlen(base);
	count = 0;
	if (n >= size_base)
	{
		count += ft_putnbr_base_us(n / size_base, base);
		count += ft_putnbr_base_us(n % size_base, base);
	}
	else
		count += ft_putchar(base[n]);
	return (count);
}
