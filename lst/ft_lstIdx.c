/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstIdx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:30:38 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/24 00:32:27 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstidx(t_list *lst, int idx)
{
	if (!lst)
		return (NULL);
	while (lst->next && idx)
	{
		lst = lst->next;
		idx--;
	}
	return (lst);
}
