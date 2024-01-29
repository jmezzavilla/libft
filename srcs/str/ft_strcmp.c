/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:35:28 by jealves-          #+#    #+#             */
/*   Updated: 2023/12/23 16:28:19 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_strcmpold(const char *s1, const char *s2)
{
	size_t	count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
		count++;
	if (((unsigned char)s1[count] - (unsigned char)s2[count]) == 0)
		return (true);
	return (false);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	count;

	count = 0;
	if (!s1 || !s2)
		return (-1);
	while (s1[count] == s2[count] && s1[count] != '\0')
		count++;
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}
