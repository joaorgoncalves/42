/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosa-go <jrosa-go@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:08:28 by jrosa-go          #+#    #+#             */
/*   Updated: 2023/10/18 15:44:12 by jrosa-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT
# define LIBFT

int	ft_isalpha(char c);
int	ft_isdigit(char c);
int	ft_isalnum(char c);
int	ft_isascii(char c);
int	ft_isprint(char c);
int	ft_strlen(char *c);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int	ft_strlcpy(char *dest, const char *src, size_t size);
int	ft_strlcat(char *dest, const char *src, size_t size);
