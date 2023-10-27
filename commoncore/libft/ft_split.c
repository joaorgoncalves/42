/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:34:39 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/10/27 17:28:31 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		x;
	int		nwords;
	int		wrdlen;
	char	**matrix;

	i = 0;
	x = 0;
	nwords = wordcount(s, c);
	matrix = (char *)malloc(sizeof(char *) * nwords);
	if (!matrix)
	{
		return (NULL);
	}
	while (i < nwords)
	{
		j = 0;
		wodlen = wordlen(&s[x], c);
		matrix[i] = (char)malloc(sizeof(char) * wordlen(&s[x]);
		if (!matri[i])
		{
			return (NULL);
		}
		while (j < wrdlen)
		{
			matrix[i, j++] = s[x++];
		}
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}

int	wordcount(char const *s, char c)
{
	int	i;
	int	nwords;

	i = 0;
	nwords = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c || s[i] != '\0')
		{
			i++;
		}
		nwords++;
		i++;
	}
	return (nwords);
}

int	wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c || s[i] != '\0')
	{
		i++;
	}
	return (i);
}
