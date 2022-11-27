# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: keys <keys@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/30 11:18:56 by kyoda             #+#    #+#              #
#    Updated: 2022/11/27 12:24:17 by keys             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
SRC			= ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_memchr.c \
ft_memcpy.c ft_memset.c ft_strdup.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c \
ft_toupper.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c \
ft_memmove.c ft_strchr.c ft_strlcat.c ft_strlen.c ft_strnstr.c ft_tolower.c \
ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c  \
ft_split.c ft_striteri.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c
SRC_BONUS	= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJS		= $(SRC:.c=.o)
OBJS_BONUS	= $(SRC_BONUS:.c=.o)
CC 			= gcc
# CC 			= clang
INCLUDE		= -I ./
# INCLUDE		= -I libft.h
CFLAGS		= -Wall -Wextra -Werror $(INCLUDE)
# CFLAGS		= -Wall -Wextra -Werror $(INCLUDE) -g -fsanitize=address -fsanitize=undefined -fsanitize=integer

ifdef WITH_BONUS
OBJS += $(OBJS_BONUS)
endif

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $^

bonus :
	make all WITH_BONUS=1

clean :
	$(RM) $(OBJS_BONUS) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus
