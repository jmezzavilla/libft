/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:17:10 by analexan          #+#    #+#             */
/*   Updated: 2023/11/02 13:48:27 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_c(char c, long *ptr)
{
	*ptr += write(1, &c, 1);
}

void	ft_putstr_c(char *s, long *ptr)
{
	long	i;

	i = -1;
	if (!s)
	{
		ft_putstr_c("(null)", ptr);
		return ;
	}
	while (s[++i])
		ft_putchar_c(s[i], ptr);
}

void	ft_putnbr_c(long n, long *ptr)
{
	if (n < 0)
	{
		ft_putchar_c('-', ptr);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_c(n / 10, ptr);
		ft_putnbr_c(n % 10, ptr);
	}
	else
		ft_putchar_c(n + '0', ptr);
}

/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	int n = 0;
	ft_putchar_c('a', &n);
	ft_putchar_c('\n', &n);
	printf("%i\n", n);
	return (0);
}
*/