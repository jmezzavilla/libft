/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:11:12 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/20 21:21:49 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelfirst(t_list **lst)
{
    t_list *current;

    if (*lst == NULL) {
        return;
    }
    current = (*lst)->next; 
    free(*lst); 
    *lst = current;
}
