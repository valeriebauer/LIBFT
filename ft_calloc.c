/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:20:44 by vbauer            #+#    #+#             */
/*   Updated: 2021/12/06 10:21:00 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*d;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	d = malloc(nmemb * size);
	if (d == NULL)
		return (NULL);
	ft_bzero(d, nmemb * size);
	return (d);
}
