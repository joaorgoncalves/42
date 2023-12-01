/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:59:40 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/11/10 17:50:13 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		inew;
	int		newstrlen;
	char	*newstr;

	i = 0;
	inew = 0;
	newstrlen = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc(sizeof(char) * newstrlen + 1);
	if (!newstr)
	{
		return (NULL);
	}
	while (s1[i])
	{
		newstr[inew++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		newstr[inew++] = s2[i++];
	}
	newstr[inew] = '\0';
	return (newstr);
}
