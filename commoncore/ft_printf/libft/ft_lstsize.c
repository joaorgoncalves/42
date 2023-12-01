/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:03:11 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/11/17 23:10:43 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	total;

	total = 0;
	if (!lst)
	{
		return (0);
	}
	while (lst->next)
	{
		lst = lst->next;
		total++;
	}
	total++;
	return (total);
}
