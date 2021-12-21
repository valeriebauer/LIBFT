/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:09:31 by vbauer            #+#    #+#             */
/*   Updated: 2021/12/21 16:01:40 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nb_len(int n)
{
	int				len;
	unsigned int	nb;

	len = 0;
	if (n < 0)
	{
		nb = -n;
		len++;
	}
	else if (n == 0)
		len++;
	else
		nb = n;
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long int	nb;
	char		*s;
	int			nb_len;

	nb_len = ft_nb_len(n);
	s = malloc(sizeof(char) * nb_len + 1);
	if (s == NULL)
		return (NULL);
	s[nb_len] = '\0';
	if (n < 0)
	{
		nb = -(long int)n;
		s[0] = '-';
	}
	else if (n == 0)
		s[0] = '0';
	else
		nb = n;
	while (nb > 0)
	{
		s[nb_len - 1] = nb % 10 + 48;
		nb = nb / 10;
		nb_len--;
	}
	return (s);
}
