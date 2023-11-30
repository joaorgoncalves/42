/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:31:38 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/11/30 17:45:28 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	comp;

	i = 0;
	comp = 0;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	while (big[i] && i < len)
	{
		comp = 0;
		while (big[i + comp] && big[i + comp] == little[comp] && i + comp < len)
		{
			if (little[comp + 1] == '\0')
			{
				return ((char *)&big[i]);
			}
			comp++;
		}
		i++;
	}
	return (NULL);
}
