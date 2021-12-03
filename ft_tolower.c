/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:03:13 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/29 17:08:33 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int ft_tolower(int c)

{
	if (c < -1 && c != -2147483648)
		c = c + 256; 
	if (c >= 'A' && c <= 'Z')
		c = c + 32; 
	return(c);
}

int	main(void)
{
	int mychr;
	
	mychr = 'a';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", mychr, tolower(mychr), ft_tolower(mychr));

	mychr = '}';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", mychr, tolower(mychr), ft_tolower(mychr));

	mychr = ' ';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", mychr, tolower(mychr), ft_tolower(mychr));

	mychr = -12;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", mychr, tolower(mychr), ft_tolower(mychr));
	
	mychr = 2147483647;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", mychr, tolower(mychr), ft_tolower(mychr));

	mychr = -2147483648;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", mychr, tolower(mychr), ft_tolower(mychr));

	return (0);
}

