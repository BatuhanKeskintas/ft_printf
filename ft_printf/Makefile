# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/15 16:19:09 by bkeskint          #+#    #+#              #
#    Updated: 2021/07/30 01:37:39 by bkeskint         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC 		= 		ft_printf.c jump.c percent.c interpret.c \
					initialize.c handle_integer.c handle_char.c handle_string.c handle_hexadecimal.c \
					handle_pointer.c handle_u_decimal.c handle_big_hexadecimal.c

OBJ 		=		$(SRC:.c=.o)

LIBFTSRC 	= 	libft/ft_memset.c libft/ft_bzero.c libft/ft_memcpy.c libft/ft_memccpy.c libft/ft_strlen.c \
				libft/ft_strlcpy.c libft/ft_memmove.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_strlcat.c \
				libft/ft_strchr.c libft/ft_strrchr.c libft/ft_strncmp.c libft/ft_strnstr.c libft/ft_atoi.c \
				libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_isalnum.c libft/ft_isascii.c libft/ft_isprint.c \
				libft/ft_toupper.c libft/ft_tolower.c libft/ft_calloc.c libft/ft_strdup.c libft/ft_substr.c \
				libft/ft_strjoin.c libft/ft_strtrim.c libft/ft_split.c libft/ft_itoa.c libft/ft_strmapi.c \
				libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c \

INCLUDES 	= 		./

LIBDIR 		= 		./libft

BIN 		= 		../ft_printf_main_batu.c

HEADER		=		ft_printf.h

CC			=		gcc

RM			= 		rm -rf

CFLAGS 		= 		-g -Wall -Werror -Wextra

NAME 		= 		libftprintf.a

%.o: %.c ${HEADER}
			$(CC) -c $(CFLAGS) -o $@ $<

all: 		$(NAME)

$(NAME): 	$(OBJ)
			@make all -C $(LIBDIR) -I$(INCLUDES)
			$(CC) $(CFLAGS) $(SRC) -c
			@ar rcs $(NAME) $(OBJ) $(LIBDIR)/*.o

$(OBJ): 	$(SRC)
			$(CC) $(CFLAGS) $(LIBFTSRC) $(SRC) -c
		
clean:
			$(RM) ./*.o
			$(RM) $(LIBDIR)/*.o
	
fclean: 	clean
			$(RM) $(NAME) $(LIBDIR)/libft.a 
			$(RM) program
	
re: 		fclean all

program:
			$(CC) $(CFLAGS) -w $< $(SRC) $(LIBFTSRC) $(BIN) -o $@
			./program

bonus: 		re

norm:
			@norminette $(SRC) $(LIBFTSRC) libft/*.h *.h
	