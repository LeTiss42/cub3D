# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 19:28:02 by mathis            #+#    #+#              #
#    Updated: 2023/02/07 16:15:25 by mravera          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a

LIB_DIR = ./sources/
LIB_PRINTF = ./Printf_srcs/
LIB_GNL = ./gnl_srcs/

CFILES_LIB = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_lstnew.c \
	ft_lstsize.c \
	ft_lstadd_front.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

CFILES_PRINTF = printf_is_arg.c \
	printf_is_c.c \
	printf_is_s.c \
	printf_is_p.c \
	printf_is_d.c \
	printf_is_i.c \
	printf_is_u.c \
	printf_is_x.c \
	printf_is_majx.c \
	printf_is_pcent.c \
	printf_putnbr_base.c \
	printf_putnbr_base_ui.c \
	printf_putnbr_basev.c \
	printf_strlen_unsigned.c \
	ft_printf.c \
	printf_calloc.c \

CFILES_GNL = get_next_line.c \
	get_next_line_utils.c

SRC_LIB = $(addprefix $(LIB_DIR), $(CFILES_LIB))
SRC_PRINTF = $(addprefix $(LIB_PRINTF), $(CFILES_PRINTF))
SRC_GNL = $(addprefix $(LIB_GNL), $(CFILES_GNL))

OBJ_LIB = $(SRC_LIB:%.c=%.o)
OBJ_PRINTF = $(SRC_PRINTF:%.c=%.o)
OBJ_GNL = $(SRC_GNL:%.c=%.o)

CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJ_LIB) $(OBJ_PRINTF) $(OBJ_GNL)
	ar rcs $@ $^

clean :
	$(RM) *.o
	$(RM) $(OBJ_LIB)
	$(RM) $(OBJ_PRINTF)
	$(RM) $(OBJ_GNL)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus
