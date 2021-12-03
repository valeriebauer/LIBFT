/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:08:14 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/25 12:13:06 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#include <string.h>
#include "libft.h"

//size_t ft_strlen(const char *s)
//{
//	int i;
//
//	i = 0;
//	while (s[i])
//		i++;
//	return (i);
//}

int main(void)
{
	char *x;

	x = "coucou";
	printf("param: %s, Ft Nat: %ld, Ma Ft: %ld\n", x, strlen(x), ft_strlen(x));	
	x = "hj &^(/ jva765";
	printf("param: %s, Ft Nat: %ld, Ma Ft: %ld\n", x, strlen(x), ft_strlen(x));	
	x = "";
	printf("param: %s, Ft Nat: %ld, Ma Ft: %ld\n", x, strlen(x), ft_strlen(x));	

	return (0);
}
