/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:00:38 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/30 15:40:35 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>
#include "libft.h"

// void *ft_memchr(const void *s, int c, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	while ((((unsigned char *)s)[i]) && (i < n) && (((unsigned char *)s)[i] != c))
// 		i++;
// 	if (((unsigned char *)s)[i]) 
// 		return (&((unsigned char*)s)[i]);
// 	else
// 		return (NULL);
// }

int main(void)
{
printf("void *memchr(const void *s, int c, size_t n);\n");
/* scans  the  initial n bytes of the memory area pointed to by s for the first instance of c.  
Both c and the  bytes of the memory area pointed to by s are interpreted as unsigned char */

	printf("char *ft_memchr(const char *s, int c);\n");

	char s1[]="hello world";
	char s2[]="hello world";
	int c = 108; // caractere l
	size_t n = 3 * sizeof(char);
	printf("car: %d | s: | %s l: %ld\n", c, s1, n);
	printf("Ft Native : %s\n", (char*)memchr(s1, c, n));
	printf("Ma Ft     : %s\n", (char*)ft_memchr(s2, c, n));
	 	
	return (0);
}