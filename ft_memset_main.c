/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:00:38 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/29 14:37:25 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	printf("void *memset(void *s, int c, size_t n);\n");
	/*
	fills the first n bytes of the memory area pointed to by s with the constant byte c
	*/
// declaration NOK = segment fault !!?
//	char *a;
//	a = "valerie";
//	printf("%s\n", a);
//	memset(a, 5, 3);

// AVEC UN TABLEAU DE CHAR mais bugg avec n > 8
	printf("Avec un tableau de CAR\n");
	char s1[]="valerie";
	char s2[]="valerie";
//	char s1[]={'a',' ',')'};
//	char s2[]={'a',' ',')'};
	size_t n = 3 * sizeof(char); 
//	memset((void *)s1, 'z', n);	
	memset(s1, 'z', n); 
	printf("Ft Native: %s\n", s1); 	
	ft_memset(s2, 'z', n);
	printf("Ma ft    : %s\n", s2);

	printf("\n");
	printf("Avec un tableau d INT\n");

// AVEC UN TABLEAU D INT 
	int s3[4]={1,78,-244,0};
	int s4[4]={1,78,-244,0};
	size_t i = 0; 
	size_t m = 2 * sizeof(int); // instruction facultative car 1 CAR 1 octet qq systeme
	memset(s3, '0', m);// remplace 1er elt du tableau par 808464432	(et non par 0)
	while (i < 4)
	{ 
		printf("Ft Native: %d\n", s3[i]);
		i++;
	}
	ft_memset(s4, 20, m);// 20 = 1 CAR non imprimable, affiche 336860180  
	i = 0; 
	while (i < 4)
	{ 
		printf("Ma Ft: %d\n", s4[i]);
		i++;
	}

//	*** stack smashing detected ***:
//	memset( s, '1', 9);
//	printf("%s", s);
//	Ne compile pas du fait d incompatibilite entre %s et type void* de la fct:

	return (0);
}
