/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:00:33 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/10/22 16:36:30 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstsize;
	size_t	i;

	dstsize = ft_strlen(dst);
	i = 0;
	while (i < size - dstsize - 1 || src[i] != '\0')
	{
		dst[i + dstsize] = src[i];
		i++;
	}
	dst[i + dstsize] = '\0';
	return (dstsize + i);
}
