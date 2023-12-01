/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 23:29:22 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/12/01 17:59:46 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conversion_checker(const char *s, va_list lst);

int	ft_printf(const char *s, ...)
{
	int		i;
	int		printlen;
	va_list	lst;

	i = 0;
	printlen = 0;
	va_start(lst, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			printlen += conversion_checker(&s[i], lst);
			i++;
		}
		else
		{
			write(1, &s[i], 1);
			i++;
			printlen++;
		}
	}
	return (printlen);
}

int	conversion_checker(const char *s, va_list lst)
{
	int	printlen;

	printlen = 0;
	if (s[1] == 'c')
		printlen += ft_putchar(va_arg(lst, int));
	else if (s[1] == 's')
		printlen += ft_putstr(va_arg(lst, char *));
	else if (s[1] == 'p')
		printlen += ft_putptr(va_arg(lst, unsigned long));
	else if (s[1] == 'd')
		printlen += ft_putnbr(va_arg(lst, int));
	else if (s[1] == 'i')
		printlen += ft_putnbr(va_arg(lst, int));
	else if (s[1] == 'u')
		printlen += ft_putunbr(va_arg(lst, unsigned int));
	else if (s[1] == 'x')
		printlen += ft_puthex(va_arg(lst, unsigned int), "0123456789abcdef");
	else if (s[1] == 'X')
		printlen += ft_puthex(va_arg(lst, unsigned int), "0123456789ABCDEF");
	else if (s[1] == '%')
		printlen += ft_putchar('%');
	return (printlen);
}
