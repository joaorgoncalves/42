/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <joaorgoncalvesp@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:34:39 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/11/13 13:09:18 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	wordcount(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	*start;
	char	*end;
	char	**matrix;
	int		nwords;
	int		i;

	start = (char *)s;
	i = 0;
	nwords = wordcount(s, c);
	matrix = (char**)malloc(nwords * sizeof(char *));
	if (!matrix)
	{
		return (NULL);
	}
	while (i < nwords)
	{
		while (start[0] == c)
		{
			start++;
		}
		end = ft_strchr(start, c);
		if (!end)
		{
			end = ft_strchr(start, '\0');
		}
		matrix[i] = (char *)malloc((end - start) * sizeof(char));
		if (!matrix[i])
		{
			return (NULL);
		}
		ft_strlcpy(matrix[i], start, end - start + 1);
		start = end;
		i++;
	}
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
		while (s[i] != c && s[i] != '\0')
		{
			i++;
		}
		if (s[i + 1] != c)
		{
			nwords++;
		}
		i++;
	}
	return (nwords);
}

int	main(void)
{
	int i, j = 0;
	char	**matrix = ft_split("isto e um teste simples", ' ');
	
	while (matrix[i])
	{
		while(matrix[i][j])
		{
			printf("%c",matrix[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
