/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:00:38 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/30 15:40:35 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *dest2;
	unsigned char *src2;
	size_t	i;

	dest2 = dest;
	src2 = (unsigned char *)src;
	i = 0;
	
	if (src == NULL && dest == NULL)
		return (NULL);
	if (dest < src) 
		while (i < n)
		{
			dest2[i] = src2[i];	
			i++;
		}
	else 
		while (n)
		{
			dest2[n - 1] = src2[n - 1];
			n--;
 		}
	return (dest);
}
