/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:47:01 by vbauer            #+#    #+#             */
/*   Updated: 2021/10/22 14:38:04 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	if (size > 0)
	{
		i = 0;
		while ((i < size - 1) && (src[i]))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	if (src[0])
		return (ft_strlen(src));
	else
		return (0);
}
