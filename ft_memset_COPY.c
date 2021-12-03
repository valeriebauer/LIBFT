/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:00:38 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/29 14:36:14 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *str;

//	str = (unsigned char *)s;
	str = s;
	while (n > 0)
	{
		*str = (unsigned char)c;	
//		*str = c;	
		str++;
		n--;
	}
//	return ((void *)str);
	return (str);
}
