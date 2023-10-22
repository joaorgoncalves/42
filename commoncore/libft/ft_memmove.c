/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:13:22 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/10/22 16:25:04 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dtemp;
	char	*stemp;

	dtemp = (char *)dst;
	stemp = (char *)src;
	i = 0;
	while (i < len)
	{
		if (&dtemp[i] == stemp)
		{
			return (dst);
		}
		dtemp[i] = stemp[i];
		i++;
	}
	return (dst);
}
