/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:00:18 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/29 17:01:38 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"


int ft_toupper(int c)
{
	if (c < -1 && c != -2147483648)
		c = c + 256; 
	if (c >= 'a' && c <= 'z')
		c = c - 32; 
	return(c);
}

int	main(void)
{
	int mychr;
	
	mychr = 'a';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", mychr, toupper(mychr), ft_toupper(mychr));

	mychr = '}';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", mychr, toupper(mychr), ft_toupper(mychr));

	mychr = ' ';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", mychr, toupper(mychr), ft_toupper(mychr));

	mychr = -12;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", mychr, toupper(mychr), ft_toupper(mychr));
	
	mychr = 2147483647;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", mychr, toupper(mychr), ft_toupper(mychr));

	mychr = -2147483648;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", mychr, toupper(mychr), ft_toupper(mychr));

	return (0);
}

