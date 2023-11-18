/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:53:46 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/11/17 17:02:14 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nlen(int n);

char	*ft_itoa(int n)
{
	int		i;
	int		nc;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = nlen(n);
	if (n < 0)
		nc = -n;
	else
		nc = n;
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	result[i--] = '\0';
	if (nc == 0)
		result[i] = '0';
	while (nc > 0)
	{
		result[i--] = (nc % 10) + '0';
		nc = nc / 10;
	}
	if (n < 0)
		result[i] = '-';
	return (result);
}

int	nlen(int n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		size ++;
	}
	if (n == 0)
	{
		size++;
	}
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}
