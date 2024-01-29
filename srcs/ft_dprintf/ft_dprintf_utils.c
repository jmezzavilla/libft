/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:17:10 by analexan          #+#    #+#             */
/*   Updated: 2023/12/19 16:01:02 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dputchar_c(char c, long *ptr, int fd)
{
	*ptr += write(fd, &c, 1);
}

void	ft_dputstr_c(char *s, long *ptr, int fd)
{
	long	i;

	i = -1;
	if (!s)
	{
		ft_dputstr_c("(null)", ptr, fd);
		return ;
	}
	while (s[++i])
		ft_dputchar_c(s[i], ptr, fd);
}

void	ft_dputnbr_c(long n, long *ptr, int fd)
{
	if (n < 0)
	{
		ft_dputchar_c('-', ptr, fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_dputnbr_c(n / 10, ptr, fd);
		ft_dputnbr_c(n % 10, ptr, fd);
	}
	else
		ft_dputchar_c(n + '0', ptr, fd);
}

/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	int n = 0;
	ft_dputchar_c('a', &n);
	ft_dputchar_c('\n', &n);
	printf("%i\n", n);
	return (0);
}
*/