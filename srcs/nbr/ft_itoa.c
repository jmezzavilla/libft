/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:34:07 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/14 22:34:10 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digit_count(long int i)
{
	size_t	count;

	count = 0;
	if (i == 0)
	{
		count++;
	}
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

void	ft_write_str(char *str, long int nb, size_t size)
{
	if (nb == 0)
	{
		str[0] = '0';
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[size--] = nb % 10 + '0';
		nb = nb / 10;
	}
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		size;
	long int	nb;

	nb = n;
	size = ft_digit_count(nb);
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (0);
	str[size--] = '\0';
	ft_write_str(str, nb, size);
	return (str);
}

/*int	main(void)
{
	int n = -12345;
	char *str = ft_itoa(n);
	printf("O número %d em string é: %s\n", n, str);
	free(str);
	return (0);
}*/