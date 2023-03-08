/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:59:19 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/08 22:01:55 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
        size_t b_count;
        size_t l_count;

        b_count = 0;

        while(big[b_count])
        {
                l_count = 0;
                while(big[b_count + l_count] == little[l_count] && (b_count + l_count) <= len)
                {
                        if(little[l_count + 1] != '\0')
                        {       
                                return((char *)&big[b_count]);
                        }
                        l_count++;
                }

                b_count++;
        }
        return(0);
}

int	main(void)
{
    char str[20] = "Jessica Mezzavilla";
    char sub_string[5] = "ca";
    char *new_str;
    char *new_str_ft;

    new_str = strstr(str, sub_string);
    new_str_ft = ft_strnstr(str, sub_string,5);

    printf("original: %s\n", new_str);
    printf("custom: %s\n", new_str_ft);
}