/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:21:32 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/10/19 15:37:18 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*#include<stdio.h>
int	main(void)
{
	printf("%d",ft_isalpha('a'));
	printf("%d",ft_isalpha('A'));
	printf("%d",ft_isalpha(';'));
	printf("%d",ft_isalpha(' '));
}*/
