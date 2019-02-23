# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/17 18:48:40 by bogoncha          #+#    #+#              #
#    Updated: 2019/02/22 21:29:42 by bogoncha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c \
	 ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c \
	 ft_isupper.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	 ft_memdel.c ft_memmove.c ft_memset.c \
	 ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c \
	 ft_strcpy.c ft_strdel.c \
	 ft_strdup.c ft_striter.c ft_striteri.c \
	 ft_strlcat.c ft_strlen.c ft_strncat.c \
	 ft_strncmp.c ft_strncpy.c ft_strnew.c ft_strnstr.c \
	 ft_strrchr.c ft_strstr.c ft_tolower.c ft_toupper.c ft_strmap.c ft_strmapi.c ft_strequ.c \
	 ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_iswhitespace.c ft_wordscount.c ft_strsplit.c \
	 ft_putchar.c ft_putstr.c ft_itoa.c ft_getnbsize.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c \
	 ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c \
	 ft_lstiter.c ft_lstmap.c ft_isblank.c ft_str_is_alpha.c ft_str_is_lowercase.c ft_str_is_numeric.c \
	 ft_str_is_printable.c ft_str_is_uppercase.c ft_strlowcase.c ft_strupcase.c ft_size_of_word.c

OBJ = ft_atoi.o ft_bzero.o ft_isalnum.o \
	 ft_isalpha.o ft_isascii.o ft_isdigit.o ft_islower.o ft_isprint.o \
	 ft_isupper.o ft_memalloc.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o \
	 ft_memdel.o ft_memmove.o ft_memset.o \
	 ft_strcat.o ft_strchr.o ft_strclr.o ft_strcmp.o \
	 ft_strcpy.o ft_strdel.o \
	 ft_strdup.o ft_striter.o ft_striteri.o \
	 ft_strlcat.o ft_strlen.o ft_strncat.o \
	 ft_strncmp.o ft_strncpy.o ft_strnew.o ft_strnstr.o \
	 ft_strrchr.o ft_strstr.o ft_tolower.o ft_toupper.o ft_strmap.o ft_strmapi.o ft_strequ.o \
	 ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o ft_iswhitespace.o ft_wordscount.o ft_strsplit.o \
	 ft_putchar.o ft_putstr.o ft_itoa.o ft_getnbsize.o ft_putendl.o ft_putnbr.o ft_putchar_fd.o \
	 ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstadd.o \
	 ft_lstiter.o ft_lstmap.o ft_isblank.o ft_str_is_alpha.o ft_str_is_lowercase.o ft_str_is_numeric.o \
	 ft_str_is_printable.o ft_str_is_uppercase.o ft_strlowcase.o ft_strupcase.o ft_size_of_word.o

INCLUDES=./

$(NAME): $(SRCS) libft.h
	gcc -Wall -Wextra -Werror -I $(INCLUDES) -c $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all