/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:13:35 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/11/14 22:13:30 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*endstr;

	start = 0;
	if (!s1)
	{
		return (NULL);
	}
	if (!set)
	{
		return (ft_strdup(s1));
	}
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (s1[end] && ft_strchr(set, s1[end]))
	{
		end--;
	}
	endstr = ft_substr(s1, start, end - start + 1);
	return (endstr);
}
