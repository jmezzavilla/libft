/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:48:10 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/03/07 19:54:59 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include<ctype.h>

#include <stdio.h>


size_t ft_strlen(const char *str);

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);



#endif