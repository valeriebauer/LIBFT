/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:09:31 by vbauer            #+#    #+#             */
/*   Updated: 2021/12/22 18:18:08 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nb_len(int n)
{
	int				len;
	unsigned int	nb;

	len = 1;
	if (n < 0)
	{
		nb = -n;
		len++;
	}
	else
		nb = n;
	while (nb / 10)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned int	nb;
	size_t			nb_len;

	nb_len = ft_nb_len(n);
	s = malloc(sizeof(char) * nb_len + 1);
	if (!s)
		return (NULL);
	s[nb_len] = '\0';
	s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		nb = -n;
	}
	else
		nb = n;
	while (nb > 0)
	{
		s[nb_len - 1] = (nb % 10) + 48;
		nb /= 10;
		nb_len--;
	}
	return (s);
}
