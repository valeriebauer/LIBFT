/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:09:31 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/29 18:41:12 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void ft_split( const char  * s)
{

	printf("\n *** split *** \n");
	printf(" s  %p\n", s);
	printf(" &s %p\n", &s);
	printf(" *s %c\n", *s);
	 s++;
	printf(" s  %p\n", s);
	printf(" &s %p\n", &s);
	printf(" *s %c\n", *s);
}

// void ft_split(char *s)
// {
// 	printf("\n*** split *** ");
// 	printf("s  %s\n", s);
// 	printf("&s %p\n", &s);
// 	printf("*s %c\n", *s);
// }

int main(void)
{
	char a[] = "+++tou++va+";
	char *s;
	s = a;
printf("\n *** main *** \n");
printf("  s %s\n", s);
printf(" &s %p\n", &s);

ft_split(a);	

printf("\n *** main retour *** \n");
printf("  s %s\n", s);
printf(" &s %p\n", &s);
return (0);
}