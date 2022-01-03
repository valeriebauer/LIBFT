/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:09:31 by vbauer            #+#    #+#             */
/*   Updated: 2022/01/03 17:39:27 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_s_strlen(char const *s, char c)
{
	size_t	strlen;

	strlen = 0;
	while (s[strlen] != c && s[strlen])
		strlen++;
	return (strlen);
}

static size_t	ft_strnb(char const *s, char c)
{
	int		i;
	size_t	strnb;

	i = 0;
	strnb = 0;
	while (s[i])
	{	
		if (s[i] == c)
			i++;
		else
		{
			strnb++;
			while ((s[i] != c) && s[i])
				i++;
		}
	}
	return (strnb);
}

static char	*ft_str_cpy(char **tab, char const *s, size_t strlen, size_t strnb)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (strlen + 1));
	if (str == NULL)
	{
		while (strnb--)
			free(tab[strnb]);
		free(tab);
		return (NULL);
	}
	while (i < strlen)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	strnb;
	size_t	strlen;
	char	**tab;
	int		j;

	if (s == NULL)
		return (NULL);
	strnb = ft_strnb(s, c);
	j = 0;
	tab = (char **)malloc(sizeof(char *) * (strnb + 1));
	if (tab == NULL)
		return (NULL);
	tab[strnb] = NULL;
	while (strnb--)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			strlen = ft_s_strlen(s, c);
			tab[j++] = ft_str_cpy(tab, s, strlen, strnb);
			s = s + strlen;
		}
	}
	return (tab);
}
