# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 21:26:45 by akrikuno          #+#    #+#              #
#    Updated: 2022/12/22 21:39:57 by akrikuno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

INCLUDE		= include
LIBFT		= ./libft
SRC_DIR		= ./src
OBJ_DIR		= obj/
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I
RM			= rm -f
AR			= ar rcs

SRC_FILES	=	ft_printf.c libft.c ft_utilis.c ft_pointer.c ft_unsigned_int.c \
				 ft_hex.c

OBJS		= $(SRCS:%.c=$(OBJ_DIR)/%.o)

$(NAME):	$(OBJS)
			@$(AR) $(NAME) $(OBJS)

$(LIBFT):	
			@make -C $(LIBFT)
			@cp $(LIBFT)/libft.a .
			@mv libft.a $(NAME)
			
$(OBJF):
			@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
			@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all:		$(NAME)

clean:
			@$(RM) $(OBJ_DIR)
			@make clean -C $(LIBFT)

fclean:		clean
			@$(RM) $(NAME)
			@$(RM) $(LIBFT)/libft.a

re:			fclean all

.PHONY:		all clean fclean re
