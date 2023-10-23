/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:38:36 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/10/22 16:31:57 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	strlen;

	strlen = ft_strlen(s);
	while (strlen >= 0)
	{
		if (s[strlen] == c)
		{
			return ((char *)&s[strlen]);
		}
		strlen++;
	}
	return (NULL);
}
