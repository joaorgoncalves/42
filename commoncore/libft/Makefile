# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrosa-go <jrosa-go@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 15:36:34 by jrosa-go          #+#    #+#              #
#    Updated: 2023/11/18 17:38:14 by jrosa-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = ft_isalpha.o \
		ft_isdigit.o \
		ft_isalnum.o \
		ft_isascii.o \
		ft_isprint.o \
		ft_strlen.o \
		ft_memset.o \
		ft_bzero.o \
		ft_memcpy.o \
		ft_memmove.o \
		ft_strlcpy.o \
		ft_strlcat.o \
		ft_toupper.o \
		ft_tolower.o \
		ft_strchr.o \
		ft_strrchr.o \
		ft_strncmp.o \
		ft_memchr.o \
		ft_memcmp.o \
		ft_strnstr.o \
		ft_atoi.o \
		ft_calloc.o \
		ft_strdup.o \
		ft_substr.o \
		ft_strjoin.o \
		ft_strtrim.o \
		ft_split.o \
		ft_itoa.o \
		ft_strmapi.o \
		ft_striteri.o \
		ft_putchar_fd.o \
		ft_putstr_fd.o \
		ft_putendl_fd.o \
		ft_putnbr_fd.o

BONUS = ft_lstnew.o \
		ft_lstadd_front.o \
		ft_lstsize.o \
		ft_lstlast.o \
		ft_lstadd_back.o \
		ft_lstdelone.o \
		ft_lstclear.o \
		ft_lstiter.o \
		ft_lstmap.o

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $^

bonus: $(OBJS) $(BONUS)
	ar -rcs $(NAME) $(OBJS) $(BONUS)

%.o: %.c
	cc -c -Wall -Werror -Wextra $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean
	$(MAKE) all
