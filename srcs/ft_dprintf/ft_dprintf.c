/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:11:55 by analexan          #+#    #+#             */
/*   Updated: 2023/12/19 16:07:19 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>
#include "ft_dputchar_c.c"
#include "ft_dputstr_c.c"
#include "ft_dputnbr_c.c"
int	main(void)
{
	// char	name[] = "andre";
	int		age = -155;
	// unsigned int	uage = 3294967295;
	char	str[] = //"name: %s, starts with %c, %% "
					// "age: %d/%i/%u\n"
					"that is %x/%X in hex "
					"is being pointed by %p";
	printf("\nstr len: %d\n", printf(str
	// , name, name[0], age, age, uage
	, 0, age, age));
	printf("\nstr len: %d\n", ft_printf(str
	// , name, name[0], age, age, uage
	, 0, age, age));
	return (0);
}
*/
void	dprinthex(unsigned long num, int mode, long *ptr, int fd)
{
	if (!num && mode == 2)
	{
		ft_dputstr_c("(nil)", ptr, fd);
		return ;
	}
	if (mode == 2)
	{
		ft_dputchar_c('0', ptr, fd);
		ft_dputchar_c('x', ptr, fd);
		mode = 0;
	}
	if (num >= 16)
		dprinthex(num / 16, mode, ptr, fd);
	if (mode == 0)
		ft_dputchar_c("0123456789abcdef"[num % 16], ptr, fd);
	else if (mode == 1)
		ft_dputchar_c("0123456789ABCDEF"[num % 16], ptr, fd);
}

int	dchosentype(const char *format, va_list args, long *len, int fd)
{
	format++;
	if (*format == 'c')
		ft_dputchar_c(va_arg(args, int), len, fd);
	else if (*format == 's')
		ft_dputstr_c(va_arg(args, char *), len, fd);
	else if (*format == 'p')
		dprinthex(va_arg(args, unsigned long), 2, len, fd);
	else if (*format == 'd' || *format == 'i')
		ft_dputnbr_c(va_arg(args, int), len, fd);
	else if (*format == 'u')
		ft_dputnbr_c(va_arg(args, unsigned int), len, fd);
	else if (*format == 'x')
		dprinthex(va_arg(args, unsigned int), 0, len, fd);
	else if (*format == 'X')
		dprinthex(va_arg(args, unsigned int), 1, len, fd);
	else if (*format == '%')
		ft_dputchar_c('%', len, fd);
	else
		return (-1);
	return (*len);
}

int	dprt(int fd, const char *format, ...)
{
	va_list		args;
	long		lenformat;

	lenformat = 0;
	va_start(args, format);
	if (!format)
	{
		write(fd, "format is NULL\n", 15);
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
			dchosentype(format++, args, &lenformat, fd);
		else
			ft_dputchar_c(*format, &lenformat, fd);
		format++;
	}
	va_end(args);
	return (lenformat);
}
