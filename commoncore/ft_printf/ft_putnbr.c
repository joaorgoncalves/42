/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 22:19:57 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/12/01 17:52:22 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n, char *base)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	if (n >= (long)ft_strlen(base))
	{
		count += ft_putnbr(n / (long)ft_strlen(base), base);
		count += write(1, &base[n % (long)ft_strlen(base)], 1);
	}
	else if (n < (long)ft_strlen(base))
	{
		count += write(1, &base[n], 1);
	}
	return (count);
}
