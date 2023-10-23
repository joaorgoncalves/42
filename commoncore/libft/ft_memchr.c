/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:25:13 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/10/23 16:31:59 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char * stemp;

	i = 0;
	stemp = (char *)s;
	while (stemp[i] || i < n)
	{
		if (stemp[i] == (char)c)
		{
			return ((void *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
