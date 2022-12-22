# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akrikuno <akrikuno@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/22 21:22:20 by akrikuno          #+#    #+#              #
#    Updated: 2022/12/22 21:40:30 by akrikuno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ================================ VARIABLES ================================= #

# The name of your executable
NAME	= libftprintf.a

# Compiler and compiling flags
CC	= cc
CFLAGS	= -Wall -Werror -Wextra
AR	= ar rcs

# Debug, use with`make DEBUG=1`
ifeq ($(DEBUG),1)
CFLAGS	+= -g3 -fsanitize=address
endif

# Folder name
SRCDIR	= src/
LIBFTDIR  =  libft/
INCDIR	= include/
OBJDIR	= obj/

# Add include folder
CFLAGS	+= -I $(INCDIR)

# Linking stage flags
LDFLAGS =

SRCS = ft_printf.c libft.c ft_utilis.c ft_pointer.c ft_unsigned_int.c \
				 ft_hex.c

HEADERS = libft.h ft_printf.h

# String manipulation magic
SRC		:= $(notdir $(SRCS))
OBJ		:= $(SRC:.c=.o)
OBJS	:= $(addprefix $(OBJDIR), $(OBJ))

# Colors
GR	= \033[32;1m
RE	= \033[31;1m
YE	= \033[33;1m
CY	= \033[36;1m
RC	= \033[0m

# Implicit rules
VPATH := $(SRCDIR) $(OBJDIR) $(shell find $(SRCDIR) -type d)

# ================================== RULES =================================== #

all : $(OBJDIR) $(NAME) 

$(OBJDIR):
	@mkdir -p $(OBJDIR)

# Compiling
$(OBJDIR)%.o : %.c
	@mkdir -p $(OBJDIR)
	@printf "$(GR)+$(RC)"
	@$(CC) $(CFLAGS) -c $< -o $@


# Linking
$(NAME)	: $(SRCS)  $(OBJS) $(LIBFTDIR)
	@printf "\n$(GR)=== Compiled [$(CC) $(CFLAGS)] ===\n--- $(SRC)$(RC)\n"
	@$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(NAME)
	@printf "$(YE)&&& Linked [$(CC) $(LDFLAGS)] &&&\n--- $(NAME)$(RC)\n"

# Cleaning
clean :
	@printf "$(RE)--- Removing $(OBJDIR)$(RC)\n"
	@rm -rf $(OBJDIR)

fclean : clean
	@printf "$(RE)--- Removing $(NAME)$(RC)\n"
	@rm -f $(NAME)

# Special rule to force to remake everything
re : fclean all

# This runs the program
run : $(NAME)
	@printf "$(CY)>>> Running $(NAME)$(RC)\n"
	./$(NAME)