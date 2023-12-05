/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 22:19:57 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/12/01 17:54:08 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int		count;
	char	*base;

	base = "0123456789";
	count = 0;
	if (n >= 10)
	{
		count += ft_putunbr(n / 10);
		count += write(1, &base[n % 10], 1);
	}
	else if (n < 10)
	{
		count += write(1, &base[n], 1);
	}
	return (count);
}
