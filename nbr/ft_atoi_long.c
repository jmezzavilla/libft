/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:34:14 by jealves-          #+#    #+#             */
/*   Updated: 2023/10/05 00:05:50 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi_long(const char *nptr)
{
	long	i;
	long	sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		if ((result > LONG_MAX / 10) || 
            (result == LONG_MAX / 10 && (nptr[i] - '0') > (LONG_MAX % 10))) {
			if(sign == -1)
				return (LONG_MIN);
			else
            	return (LONG_MAX);
        }
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

/*int main(void)
{
	char *sa = " -11234ab567";

	printf("custom = %d\n", ft_atoi(sa));
}*/
