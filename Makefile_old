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
SRC = *****.c
INCL = libft.h
AR = ar rc
RM = rm -f
GCC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(GCC) $(FLAGS) -I$(INCL) -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: clean all
     
.PHONY = re all clean fclean