# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 16:17:32 by vbauer            #+#    #+#              #
#    Updated: 2021/11/24 11:56:57 by vbauer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.cft_memset.c\
	ft_bzero.cft_memcpy.cft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
	ft_strchr.cft_strrchr.c ft_strncmp.cft_memchr.c ft_memcmp.cft_strnstr.c ft_atoi.c\
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
	ft_strteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl.c ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c\
	ft_lstsize.c ft_lstlast.c ft_lstadd_back ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c   
OBJ = $(SRC:.c=.o);

INCL = libft.h
AR = ar rc
RM = rm -f
GCC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

.c.o:
	$(GCC) $(FLAGS) -I$(INCL) -o $(NAME) $(SRC)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) *.o

fclean:
	$(RM) $(NAME)

re: clean all
     
.PHONY = re all clean fclean