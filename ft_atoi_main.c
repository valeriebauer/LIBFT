/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:09:31 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/29 18:41:12 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *mychr;
	
	printf("int	ft_atoi(const char *str)\n");

	mychr = "1234";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", mychr, atoi(mychr), ft_atoi(mychr));

	mychr = "qwe";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", mychr, atoi(mychr), ft_atoi(mychr));
	mychr = "-qwe";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", mychr, atoi(mychr), ft_atoi(mychr));
	mychr = " qwe123";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", mychr, atoi(mychr), ft_atoi(mychr));	
	mychr = " 123qwe";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", mychr, atoi(mychr), ft_atoi(mychr));
	mychr = "q123we";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", mychr, atoi(mychr), ft_atoi(mychr));	
	mychr = "12qwe3";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", mychr, atoi(mychr), ft_atoi(mychr));

	mychr = "++1";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", mychr, atoi(mychr), ft_atoi(mychr));
	mychr = "--1";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", mychr, atoi(mychr), ft_atoi(mychr));
	mychr = "+-42";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", mychr, atoi(mychr), ft_atoi(mychr));
	mychr = "-+42";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", mychr, atoi(mychr), ft_atoi(mychr));
	mychr = "+ 9 42";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", mychr, atoi(mychr), ft_atoi(mychr));

	mychr = "       ";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", mychr, atoi(mychr), ft_atoi(mychr));

	mychr = "-12";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", mychr, atoi(mychr), ft_atoi(mychr));
	
	mychr = "2147483647";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", mychr, atoi(mychr), ft_atoi(mychr));

	mychr = "-2147483648";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", mychr, atoi(mychr), ft_atoi(mychr));

	return (0);
}

