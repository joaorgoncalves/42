/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:13:35 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/10/31 15:17:51 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	size_t	strsize;
	char	*endstr;

	i = 0;
	strsize = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (ft_strchr(set, s1[strsize]))
	{
		strsize--;
	}
	endstr = (char *)malloc(sizeof(char) * (strsize - i));
	endstr = ft_substr(s1, i, (strsize - i));
	return (endstr);
}
