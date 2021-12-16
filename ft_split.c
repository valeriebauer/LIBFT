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

size_t ft_str_len(char const *s, char c)
{
	int	i;
	size_t	str_len;

	i = 0;
	str_len = 0;
	while ((s[i]) && (s[i] != c))
	{
		str_len++;
		i++;
	}
	return (str_len);
}

size_t ft_str_nb(char const *s, char c)
{
	// char	*s2;
	int	i;
	size_t	str_nb;
	int str_flag;

	// s2 =(char *)s;
	i = 0;
	str_nb = 0;
	str_flag = 0;
	while (s[i])
	{	
		if ((str_flag == 0) && (s[i] != c))
		{
			str_flag = 1;
			str_nb++;
		}
		else if ((str_flag == 1) && (s[i] == c))
			str_flag = 0;
			// s2[i] = '\0';
		i++;
	}
	return (str_nb);
}

char *ft_str_cpy(s, c)
{
	size_t	str_len;
	char	*str;

	str_len = ft_str_len(s, c);
	str = malloc(sizeof(char) * (str_len + 1));
	if (str == NULL)
		return (NULL);
	str = ft_memcpy(str, s, str_len);
	return (str);
}

char    **ft_split(char const *s, char c)
{
	int	i;
	int	j;
	char	**tab1;
	char	*tab2;
	size_t	str_len;

	//printf("\nft_str_nb(s, sep): %ld\n", ft_str_nb(s, c));
	//tab1[0][3] = {{"tout"}, {"va"}, {"bien"}};
	// str_len = (size_t)(memchr(char const *s, char c) - s);
	
	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	tab1 = (char **)malloc(sizeof(char *) * (ft_str_nb(s, c) + 1))
	if (tab1 == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			tab2[j] = ft_str_cpy(s, c);
			j++;
			while (s[i] && s[i] == c)
				i++;
		}
	}
	return (tab2);
}

int main(void)
{
//*
//**************** split
//*
	printf("char    **ft_split(char const *s, char c)\n");

	//char	*s;
	char	c; 	

	// char s[] = "tout++va++bien++++++dans+le+meilleur+++++des+mondes";
	char s[] = "tout++va++bien+";
	c = '+';
	//printf("s:  %s | c: %s | ft_split: %s ", s, c, ft_split(s, c));
	ft_split(s, c);

	//*
	return (0);
}