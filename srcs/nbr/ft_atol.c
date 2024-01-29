/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:34:14 by jealves-          #+#    #+#             */
/*   Updated: 2023/10/05 15:05:59 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_result_atol(const char *nptr, int sign, int i)
{
	long	result;

	result = 0;
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		if ((result > LONG_MAX / 10) || (result == LONG_MAX / 10 && (nptr[i]
					- '0') > (LONG_MAX % 10)))
		{
			if (sign == -1)
				return (LONG_MIN);
			else
				return (LONG_MAX);
		}
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

long	ft_atol(const char *nptr)
{
	long	i;
	long	sign;

	i = 0;
	sign = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	return (ft_result_atol(nptr, sign, i));
}

/*int main(void)
{
	char *sa = " -11234ab567";

	printf("custom = %d\n", ft_atoi(sa));
}*/
