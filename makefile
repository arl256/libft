# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aripoll- <aripoll-@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 11:30:14 by aripoll-          #+#    #+#              #
#    Updated: 2022/10/07 13:55:22 by aripoll-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_isalpha.c \
		ft_isdigit.c \
		ft_isupper.c \
		ft_islower.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

OBJ = 	ft_isalpha.o \
		ft_isdigit.o \
		ft_isupper.o \
		ft_islower.o \
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

FLAGS = -Wall -Werror -Wextra

MENSAJE = "Make finalizado"

all: $(NAME)

$(NAME): $(OBJ)
#@echo "Hola voy a hacer un make con: "$(OBJ)
#gcc $(FLAGS) $(OBJ) -o $(NAME)
	
%.o : %.c
	gcc -c -MD $(FLAGS) $< -o $@
	ar -crs libft.a $@

clean:
	rm -f *.o
#"ar -crs libft.a $@ no se ejecuta"

fclean: clean
	@echo "libft.a contenia los siguientes ficheros: "
	ar -t libft.a
	rm -f $(NAME)

re: fclean all

