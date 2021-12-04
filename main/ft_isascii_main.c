/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:00:18 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/25 12:53:09 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int mychr;

	mychr = 'p';
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", mychr, isascii(mychr), 
		ft_isascii(mychr), ft_isascii(mychr) == isascii(mychr) ? "OK" : "KO");
	mychr = 452;
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", mychr, isascii(mychr), 
		ft_isascii(mychr), ft_isascii(mychr) == isascii(mychr) ? "OK" : "KO");
	mychr = -3;
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", mychr, isascii(mychr), 
		ft_isascii(mychr), ft_isascii(mychr) == isascii(mychr) ? "OK" : "KO");

	return (0);
}
