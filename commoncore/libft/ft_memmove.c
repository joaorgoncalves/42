/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:13:22 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/10/19 17:46:04 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (&dst[i] == src)
		{
			return (dst);
		}
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
