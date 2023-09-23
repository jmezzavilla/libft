/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdellast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:11:12 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/20 21:20:16 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdellast(t_list **lst)
{
    t_list *current;

    if (*lst == NULL) {
        return;
    }
     if ((*lst)->next == NULL) {
        free(*lst);
        *lst = NULL;
        return;
    }
    current = *lst;
    while (current->next->next != NULL) {
        current = current->next;
    }
    
    free(current->next);
    current->next = NULL;
}
