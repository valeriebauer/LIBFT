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
    if (n < 0)
    {
        nb = -n;
        len++;
    }
    else
        nb = n;
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

    nb_len = ft_nb_len(n);
    s = malloc(sizeof(char) * nb_len + 1);
    if (s == NULL)
        return (NULL);
    if (n == 0)
        s[0] = '0';
    s[nb_len] = '\0';
    if (n < 0)
    {
        nb = -(long int)n;
        s[0] = '-';
    }
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
