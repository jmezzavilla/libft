/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdellast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:11:12 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/30 10:25:57 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdellast(t_list **lst)
{
	t_list	*current;

	current = ft_lstidx(*lst, ft_lstsize(*lst) - 2);
	free(current->next);
	current->next = NULL;
}
