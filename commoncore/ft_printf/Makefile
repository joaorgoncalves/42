# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrosa-go <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 17:20:03 by jrosa-go          #+#    #+#              #
#    Updated: 2023/12/01 17:50:56 by jrosa-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = ft_putchar.o \
       ft_putnbr.o \
       ft_putstr.o \
       ft_puthex.o \
       ft_putptr.o \
       ft_putunbr.o \
	   ft_printf.o

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	make bonus -C libft
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $^

%.o:%.c
	cc -c -Wall -Werror -Wextra $<

clean:
	make clean -C libft
	rm -rf $(OBJS)

fclean: clean
	make fclean -C libft
	rm -rf $(NAME)

re: fclean
	$(MAKE) all
