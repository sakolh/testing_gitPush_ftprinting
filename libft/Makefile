# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shirapra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 01:38:22 by shirapra          #+#    #+#              #
#    Updated: 2022/03/07 00:09:46 by shirapra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS  = -Wall -Wextra -Werror

NAME    = libft.a

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	  ft_isdigit.c ft_memset.c ft_memcpy.c ft_strdup.c ft_strchr.c \
	  ft_strrchr.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memmove.c \
	  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	  ft_strncmp.c ft_memchr.c ft_strnstr.c ft_memcmp.c \
	  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	  ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c 

OBJS	= $(SRCS:.c=.o)

BONUS	= ft_lstclear.c ft_lstadd_back.c ft_lstadd_front.c ft_lstdelone.c \
	  ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

BONUS_OBJS	= $(BONUS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	@gcc $(FLAGS) -c $(SRCS) 
	ar -rcs $(NAME) $(OBJS)

bonus:  $(OBJS) $(BONUS_OBJS)
	@gcc $(FLAGS) -c $(BONUS)
	ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	@rm -f $(OBJS) $(BONUS_OBJS) 

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

.PHONY:	NAME all clean fclean re bonus
