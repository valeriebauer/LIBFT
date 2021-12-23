/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:00:38 by vbauer            #+#    #+#             */
/*   Updated: 2021/12/23 11:48:13 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_start_substr(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((s1[i]) && (set[j]))
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

int	ft_end_substr(char const *s1, char const *set, int i_beg)
{
	int	i;
	int	j;

	i = ((int)ft_strlen(s1) - 1);
	j = 0;
	while ((i > i_beg) && (set[j]))
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i_beg;
	int	i_end;
	int	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i_beg = 0;
	i_end = 0;
	len = 0;
	i_beg = ft_start_substr(s1, set);
	i_end = ft_end_substr(s1, set, i_beg);
	len = (i_end - i_beg) + 1;
	return (ft_substr(s1, i_beg, len));
}
