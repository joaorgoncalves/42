/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:00:45 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/11/10 17:48:19 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*copy;

	i = 0;
	len = ft_strlen(s);
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (!copy || !s)
	{
		return (NULL);
	}
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
