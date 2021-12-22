/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:16:25 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/24 16:57:57 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	if (n >= 0)
		nb = (long int)n;
	else
	{
		nb = -(long int)n;
	}
	while (nb > 0)
	{
		ft_putchar(nb % 10 + 48, fd);
		nb = nb / 10;
	}
	if (n < 0)
		ft_putchar('-', fd);
}

