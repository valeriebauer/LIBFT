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

