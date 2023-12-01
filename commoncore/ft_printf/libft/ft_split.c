/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <joaorgoncalvesp@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:34:39 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/11/30 17:36:50 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	wordcount(char const *s, char c);
int	wordsize(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		i;

	i = 0;
	matrix = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!matrix)
	{
		return (NULL);
	}
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			matrix[i++] = ft_substr(s, 0, wordsize(s, c));
		while (*s && *s != c)
			s++;
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
		if (s[i] != c)
		{
			nwords++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
		{
			i++;
		}
	}
	return (nwords);
}

int	wordsize(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
	{
		i++;
	}
	return (i);
}
