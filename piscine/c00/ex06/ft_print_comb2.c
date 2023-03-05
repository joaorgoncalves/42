/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <joaorgoncalvesp@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 00:49:58 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/03/04 01:00:41 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar (i / 10 + 48);
			ft_putchar (i % 10 + 48);
			ft_putchar (' ');
			ft_putchar (j / 10 + 48);
			ft_putchar (j % 10 + 48);
			if (i < 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

/* int	main(void)
{
	ft_print_comb2();
} */
