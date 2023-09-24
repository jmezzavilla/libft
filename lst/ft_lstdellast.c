/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdellast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:11:12 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/24 15:59:34 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdellast(t_list **lst)
{
    t_list *current;
    current = ft_lstlast(*lst);
    free(current->next);
    current->next = NULL;
}
