/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <joaorgoncalvesp@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:34:39 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/11/14 22:19:38 by jrosa-go         ###   ########.fr       */
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
	matrix = (char **)malloc((wordcount(s, c) + 1) * sizeof(char *));
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
		while (s[i] != c && s[i] != '\0')
		{
			i++;
		}
		if (s[i + 1] != c)
		{
			nwords++;
		}
		while (s[i] == c && s[i] != '\0')
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
	while (s[i] != c)
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	int i = 0;
	int j;
	char	**matrix = ft_split("  lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	
	while (matrix[i])
	{
		j = 0;
		while(matrix[i][j])
		{
			printf("%c",matrix[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}*/
