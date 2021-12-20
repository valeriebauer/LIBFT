/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:09:31 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/29 18:41:12 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_str_len(char const *s, char c)
{
	size_t	str_len;

	str_len = 0;
	while (s[str_len] != c && s[str_len])
		str_len++;
	return (str_len);
}

size_t	ft_str_nb(char const *s, char c)
{
	int		i;
	size_t	str_nb;

	i = 0;
	str_nb = 0;
	while (s[i])
	{	
			printf("str_nb ********* str_nb: %ld", str_nb);
		if (s[i] == c)
			i++;
		else
		{
			str_nb++;
			while ((s[i] != c) && s[i])
				i++;
		}
	}
				printf("str_nb ********* str_nb: %ld", str_nb);
	return (str_nb);
}

char	*ft_str_cpy(char	**tab, char const *s, size_t str_len, size_t str_nb)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (str_len + 1));
	if (str == NULL)
	{
		while (str_nb--)
			free(tab[str_nb]);
		return (NULL);
	}
	while (i < str_len)
	{
				printf("str_cpy ******* str_len: %ld\n", str_len);
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	//tab[str_nb] = str;

	//while (str_len-- > 0)
	//{
	//		printf("str_c\n", *s);
	//	*str = *s;len: %ld\n", str_len);
	//		printf("*s: %
	//		printf("*str: %c\n", *str);
	//	str++;
	//	s++;
	//}
	//*str = '\0';
	//printf("str avant return: %s\n", str);
	printf("str_cpy ******* str: %s\n", str);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	str_nb;
	size_t	str_len;
	char	**tab;
	int		j;

	str_nb = ft_str_nb(s, c);
	j = 0;
	if (s == NULL)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (str_nb + 1));
	if (tab == NULL)
		return (NULL);
	tab[str_nb] = NULL;
	while (str_nb)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			str_len = ft_str_len(s, c);
				printf("\nsplit ******* str_nb: %ld\n", str_nb);
				printf("split ******* str_len: %ld\n", str_len);
			tab[j] = ft_str_cpy(tab, s, str_len, str_nb);
			j++;
			s = s + str_len;
		}
		str_nb--;
	}
	return (tab);
}
