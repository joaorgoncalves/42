/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:09:22 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/12/01 17:52:51 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(int c);
int	ft_puthex(unsigned long n, char *base);
int	ft_putnbr(long n, char *base);
int	ft_putptr(unsigned long ptr);
int	ft_putstr(char *s);
int	ft_putunbr(unsigned int n);

#endif
