/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:47:55 by vbauer            #+#    #+#             */
/*   Updated: 2021/12/02 14:59:14 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
//#include <ctype.h>
//#include <stddef.h>
//#include <stdio.h>
//#include <string.h>
//#include <bsd/string.h>

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_atoi(const char *str);
int     ft_memcmp(const void *s1, const void *s2, size_t n);

size_t  ft_strlen(const char *s);
size_t 	ft_strlcpy(char *dest, const char *src, size_t size);
size_t 	ft_strlcat(char *dest, const char *src, size_t size);

void	ft_bzero(void *s, size_t n);

void	*ft_memset (void *s, int c, size_t n); 
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);

char    *ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
char    *ft_strdup(const char *s);

#endif
