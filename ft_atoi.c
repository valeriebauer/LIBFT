/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:09:31 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/29 18:41:12 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int nb;
	int i;
	int signe;

	nb = 0;
	i = 0;
	signe = 1;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if ((str[0] == '+') || (str[0] == '-'))
	{
		if (str[0] == '-')
			signe = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return(nb * signe);
}
