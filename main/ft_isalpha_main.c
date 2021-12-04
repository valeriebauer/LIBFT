/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:00:18 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/24 16:58:13 by vbauer           ###   ########.fr       */
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
	printf("%d \n", isalpha(97));
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", mychr, isalpha(mychr), 
		ft_isalpha(mychr), ft_isalpha(mychr) == isalpha(mychr) ? "OK" : "KO");
	mychr = 'B';
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", mychr, isalpha(mychr), 
		ft_isalpha(mychr), ft_isalpha(mychr) == isalpha(mychr) ? "OK" : "KO");
	mychr = -3;
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", mychr, isalpha(mychr), 
		ft_isalpha(mychr), ft_isalpha(mychr) == isalpha(mychr) ? "OK" : "KO");

	return (0);
}
