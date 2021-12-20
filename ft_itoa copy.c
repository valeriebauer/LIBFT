/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:09:31 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/29 18:41:12 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int    ft_nb_len(int n)
{
    int    len;
    unsigned int nb; 
    len = 0;
    nb = n;
    if (n < 0)
    {
        nb = -n;
        len++;
    }
    while (nb > 9)
    {
        nb = nb / 10;
        len++;
    }
    len++;
    return (len);
}

char    *ft_itoa(int n)
{
    long int    nb;
    char    *s;
    int    nb_len;

    nb = n;
    nb_len = ft_nb_len(n);
    s = malloc(sizeof(char) * nb_len + 1);
    if (s == NULL)
        return (NULL);
    s[nb_len] = '\0';
    if (n < 0)
    {
        nb = -nb;
        s[0] = '-';
        nb_len--;
    }
    nb_len--;
    while (nb_len >= 0)
    {        
        s[nb_len] = nb % 10 + 48;
        nb = nb / 10;
        nb_len--;
    }
    return (s);
}
