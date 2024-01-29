/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:53:25 by jealves-          #+#    #+#             */
/*   Updated: 2024/01/11 23:10:22 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrep(char **str, size_t from, size_t end, char *rep)
{
	size_t	str_len;
	size_t	new_len;
	char	*new;

	if (!(*str) || !(*rep))
		return (NULL);
	str_len = ft_strlen((*str));
	if (from >= str_len || from > end)
		return (NULL);
	new_len = (str_len - (end - from)) + ft_strlen(rep);
	new = ft_calloc(new_len + 1, sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy(new, (*str), from + 1);
	ft_strlcat(new, rep, new_len + 1);
	ft_strlcat(new, (*str) + end, new_len + 1);
	free(*str);
	*str = new;
	return (*str);
}
