/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:05:28 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/10/31 15:25:25 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dtemp;
	char	*stemp;

	dtemp = (char *)dst;
	stemp = (char *)src;
	i = 0;
	if (dst == src)
	{
		return (dst);
	}
	while (i < n)
	{
		dtemp[i] = stemp[i];
		i++;
	}
	return (dst);
}
