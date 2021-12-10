
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c de toutes les ft de LIBFT                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:00:38 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/30 15:40:35 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <string.h>
// #include <bsd/string.h>
#include "libft.h"
//*
//************ ft_main_atoi.c
//*
int	main(void)
{
	char *atoi_str;
	
	printf("int	ft_atoi(const char *str)\n");

	atoi_str = "1234";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));

	atoi_str = "qwe";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));
	atoi_str = "-qwe";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));
	atoi_str = " qwe123";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));	
	atoi_str = " 123qwe";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));
	atoi_str = "q123we";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));	
	atoi_str = "12qwe3";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));

	atoi_str = "++1";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));
	atoi_str = "--1";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));
	atoi_str = "+-42";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));
	atoi_str = "-+42";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));
	atoi_str = "+ 9 42";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));

	atoi_str = "       ";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));

	atoi_str = "-12";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));
	
	atoi_str = "2147483647";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));

	atoi_str = "-2147483648";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));

	return (0);
}

