# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 16:29:31 by akrikuno          #+#    #+#              #
#    Updated: 2022/07/14 16:29:52 by akrikuno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c \
	   srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
.c.o:
		$(CC) $(CFLAGS) -I includes -c $< -o ${<:.c=.o}
		
$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)
		
all:	$(NAME)

clean:
		rm -f $(OBJS)
		
fclean:	clean
		rm -f $(NAME)
		
re:		fclean all
