/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:50:56 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/07 18:57:19 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main()
{
    printf("%ld", ft_strlen("jessica"));
}