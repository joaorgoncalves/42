/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:46:55 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/10/24 17:58:19 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	substr = (char *)malloc(sizeof(char) * len);
	if (!substr)
	{
		return (NULL);
	}
	while (s[start] && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	return (substr);
}
