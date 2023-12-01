/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 23:29:22 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/12/01 15:36:40 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_frintf(const char *s, ...)
{
	int	i;
	va_list	lst;

	i = 0;
	va_start(lst, s);
	while (s[i])
	{
		if (s[i] != '%')
		{
			write(1, s[i], 1);
			i++;
		}
		else
		{
			// check next letter
			
			// get next argument
			// call another function to print the correct type
	}
	
}

int	conversion_checker(const char s*, va_list lst)
{
	if (s + 1 == 'c')
		ft_putchar(va_arg(lst, char));
	else if (s + 1 == 's')
		ft_putstr(va_arg(lst, char*));
	else if (s + 1 == 'p')
		ft_putstr(va_arg(lst, char*));
	else if (s + 1 == 'd')
		ft_putnbr(va_arg(lst, int));
	else if (s + 1 == 'i')
		ft_putnbr(va_agr(lst, int));
	else if (s + 1 == 'u')
		//print unsigned int
	else if (s + 1 == 'x')
		//print hexadecimal lowercase
	else if (s + 1 == 'X')
		//print hexadecimal uppercase
	else if (s + 1 == '%')
		ft_putchar('%');
}
