/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:11:55 by analexan          #+#    #+#             */
/*   Updated: 2023/11/08 15:45:46 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>
#include "ft_putchar_c.c"
#include "ft_putstr_c.c"
#include "ft_putnbr_c.c"
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
void	printhex(unsigned long num, int mode, long *ptr)
{
	if (!num && mode == 2)
	{
		ft_putstr_c("(nil)", ptr);
		return ;
	}
	if (mode == 2)
	{
		ft_putchar_c('0', ptr);
		ft_putchar_c('x', ptr);
		mode = 0;
	}
	if (num >= 16)
		printhex(num / 16, mode, ptr);
	if (mode == 0)
		ft_putchar_c("0123456789abcdef"[num % 16], ptr);
	else if (mode == 1)
		ft_putchar_c("0123456789ABCDEF"[num % 16], ptr);
}

int	chosentype(const char *format, va_list args, long *len)
{
	format++;
	if (*format == 'c')
		ft_putchar_c(va_arg(args, int), len);
	else if (*format == 's')
		ft_putstr_c(va_arg(args, char *), len);
	else if (*format == 'p')
		printhex(va_arg(args, unsigned long), 2, len);
	else if (*format == 'd' || *format == 'i')
		ft_putnbr_c(va_arg(args, int), len);
	else if (*format == 'u')
		ft_putnbr_c(va_arg(args, unsigned int), len);
	else if (*format == 'x')
		printhex(va_arg(args, unsigned int), 0, len);
	else if (*format == 'X')
		printhex(va_arg(args, unsigned int), 1, len);
	else if (*format == '%')
		ft_putchar_c('%', len);
	else
		return (-1);
	return (*len);
}

int	prt(const char *format, ...)
{
	va_list		args;
	long		lenformat;

	lenformat = 0;
	va_start(args, format);
	if (!format)
	{
		write(1, "format is NULL\n", 15);
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
			chosentype(format++, args, &lenformat);
		else
			ft_putchar_c(*format, &lenformat);
		format++;
	}
	va_end(args);
	return (lenformat);
}
