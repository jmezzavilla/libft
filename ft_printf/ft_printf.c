/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:28:18 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/14 22:28:22 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == '%')
		count += ft_putchar('%');
	else if (format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		count += ft_putpointer(va_arg(args, unsigned long int));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr_base(va_arg(args, int), DECIMAL);
	else if (format == 'u')
		count += ft_putnbr_base_us(va_arg(args, unsigned int), DECIMAL);
	else if (format == 'x')
		count += ft_putnbr_base_us(va_arg(args, unsigned int), HEXA_LOWER);
	else if (format == 'X')
		count += ft_putnbr_base_us(va_arg(args, unsigned int), HEXA_UPPER);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (!str)
		return (count);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_check_format(str[++i], args);
		}
		else
		{
			count += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}

/* int	main(void)
{
	int	count;
	int	countO;

	ft_printf("teste percentual\n");
	count = ft_printf("%%\n");
	ft_printf("%d\n", count);
	countO = printf("%%\n");
	printf("%d\n\n", countO);
	ft_printf("teste caractere\n");
	count = ft_printf("%c\n", 'a');
	ft_printf("%d\n", count);
	countO = printf("%c\n", 'a');
	printf("%d\n\n", countO);
	ft_printf("teste string\n");
	count = ft_printf("%s\n", "Jessica");
	ft_printf("%d\n", count);
	countO = printf("%s\n", "Jessica");
	printf("%d\n\n", countO);
	
	ft_printf("teste pointer\n");
	count = ft_printf("%p\n", "Jessica");
	ft_printf("%d\n", count);
	countO = printf("%p\n", "Jessica");
	printf("%d\n\n", countO);
	
	ft_printf("teste decimal e integer\n");
	count = ft_printf("%d\n", INT_MIN);
	ft_printf("%d\n", count);
	countO = printf("%d\n", INT_MIN);
	printf("%d\n\n", countO);
	count = ft_printf("%i\n", INT_MAX);
	ft_printf("%d\n", count);
	countO = printf("%i\n", INT_MAX);
	printf("%d\n\n", countO);
	
	ft_printf("teste unsigned int\n");
	count = ft_printf("%u\n", UINT_MAX);
	ft_printf("%d\n", count);
	countO = printf("%u\n",  UINT_MAX);
	printf("%d\n\n", countO);
	
	ft_printf("teste hexadecimal\n");
	count = ft_printf("%x\n", 424534658);
	ft_printf("%d\n", count);
	countO = printf("%x\n", 424534658);
	printf("%d\n", countO);
}
 */