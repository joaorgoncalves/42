/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:58:55 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/10/27 16:32:40 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*trimmedstr;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start++]))
	{
	}
	while (ft_strchr(set, s1[end--]))
	{
	}
	trimmedstr = (char *)malloc(sizeof(char) * (end - start));
	if (!trimmedstr)
	{
		return (NULL);
	}
	while (end <= start)
	{
		trimmedstr[i++] = s1[start++];
	}
	trimmedstr[i] = '\0';
	return (trimmedstr);
}
