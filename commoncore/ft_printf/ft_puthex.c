/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 22:19:57 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/12/01 17:52:07 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(long n, char *base)
{
	int	count;

	count = 0;
	if (n < 16)
	{
		return (ft_putchar(base[n]));
	}
	count += ft_puthex(n / 16, base);
	count += ft_puthex(n % 16, base);
	return (count);
}
