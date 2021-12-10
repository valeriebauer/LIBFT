# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 16:17:32 by vbauer            #+#    #+#              #
#    Updated: 2021/11/24 11:56:57 by vbauer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = a.out
#SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c\
#	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
#	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c\
#	ft_calloc.c ft_strdup.c 
#ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
#	ft_strteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl.c ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c\
#	ft_lstsize.c ft_lstlast.c ft_lstadd_back ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\   
SRC = main/ft_strchr_main.c ft_strchr.c
INCL = libft.h
#AR = ar rc
RM = rm -f
GCC = gcc
FLAGS = -Wall -Wextra -Werror -lbsd
OBJ = $(SRC:.c=.o);

all: $(NAME)

.c.o:
	$(GCC) -c $(FLAGS) $(INCL) $(SRC)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: clean all
     
.PHONY = re all clean fclean