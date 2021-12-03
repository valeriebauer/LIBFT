/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:00:18 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/25 13:03:58 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int mychr;

	mychr = 'a';
	printf("%d \n", isprint(97));
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", mychr, isprint(mychr), 
		ft_isprint(mychr), ft_isprint(mychr) == isprint(mychr) ? "OK" : "KO");
	mychr = 9;
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", mychr, isprint(mychr), 
		ft_isprint(mychr), ft_isprint(mychr) == isprint(mychr) ? "OK" : "KO");
	mychr = -3;
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", mychr, isprint(mychr), 
		ft_isprint(mychr), ft_isprint(mychr) == isprint(mychr) ? "OK" : "KO");

	return (0);
}
