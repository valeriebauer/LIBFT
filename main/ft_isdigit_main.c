/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:00:18 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/29 18:02:13 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int mychr;

	mychr = 50; /* correspond a l entier 2 */
	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", mychr, isdigit(mychr), 
		ft_isdigit(mychr));
	mychr = '8';/* correspond a l entier 8 + 48 = 56 = 1 difit donc retourne != 0*/
	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", mychr, isdigit(mychr), 
		ft_isdigit(mychr));
	mychr = 'a';/* pas 1 digit = retourne 0 */
	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", mychr, isdigit(mychr), 
		ft_isdigit(mychr));
	mychr = 98746;
	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", mychr, isdigit(mychr), 
		ft_isdigit(mychr));
	mychr = -213;
	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", mychr, isdigit(mychr), 
		ft_isdigit(mychr));
	
// plante :
//	mychr = 2147483647;
//	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", mychr, isdigit(mychr), 
//		ft_isdigit(mychr));

// plante :
//	mychr = -2147483648;
//	printf("param: %d\n", mychr);
//	printf("param: %d | Ft Native: %d\n", mychr, isdigit(mychr));
//	printf("param: %d | Ma Ft: %d\n", mychr, ft_isdigit(mychr)); 

	return (0);
}
