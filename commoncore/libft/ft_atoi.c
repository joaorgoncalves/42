/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:28:12 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/10/24 17:42:11 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	num;

	i = 0;
	neg = 0;
	num = 0;
	while (str[i] && (str[i] < !ft_isdigit(str[i])))
	{
		if (str[i] == '-')
		{
			neg++;
		}
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	if (neg % 2 == 1)
	{
		return (num * -1);
	}
	return (num);
}
