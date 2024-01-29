/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:34:14 by jealves-          #+#    #+#             */
/*   Updated: 2023/11/30 10:13:53 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_result_atoi(const char *nptr, int sign, int i)
{
	int	result;

	result = 0;
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		if ((result > INT_MAX / 10) || (result == INT_MAX / 10 && (nptr[i]
					- '0') > (INT_MAX % 10)))
		{
			if (sign == -1)
				return (INT_MIN);
			else
				return (INT_MAX);
		}
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	if (!nptr)
		return (0);
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	return (ft_result_atoi(nptr, sign, i));
}

/*int main(void)
{
	char *sa = " -11234ab567";

	printf("custom = %d\n", ft_atoi(sa));
}*/
