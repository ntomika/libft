# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sshellie <sshellie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/31 19:35:25 by sshellie          #+#    #+#              #
#    Updated: 2020/11/23 21:12:36 by sshellie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c\
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c\
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c\
		ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c\
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_split.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCBNS	= ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c

SRCOBJ	= ${SRCS:.c=.o}
BNSOBJ	= ${SRCBNS:.c=.o}

HEADERS	= libft.h

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -rf

MLB		= ar rc

CC		= gcc

INCLUDE = libft.h

all: $(NAME)

$(NAME): $(SRCOBJ)
	$(MLB) $(NAME) $(SRCOBJ)

c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDE}
clean:
	rm -rf $(SRCOBJ) $(BNSOBJ)
 
fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: $(SRCOBJ) $(BNSOBJ)
	$(MLB) $(NAME) $(SRCOBJ) $(BNSOBJ)

.PHONY: all clean fclean re bonus

