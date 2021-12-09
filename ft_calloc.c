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

void	*calloc(size_t nmemb, size_t size);
{
	size_t	s_len;
	char	*d;
	
	if (nmemb == 0 || size = 0)
		return (NULL);
	d = malloc(size * nmemb + 1);
	if (d == NULL)
		return (NULL);
	ft_bzero(d, size);
	return (d);
}
