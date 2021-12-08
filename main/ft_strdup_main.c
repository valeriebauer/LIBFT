/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:20:44 by vbauer            #+#    #+#             */
/*   Updated: 2021/12/06 10:21:00 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"
#include <ctype.h>
#include <stddef.h>
#include <stdlib.h>
#include <bsd/string.h>
int	main(void)
{
	char	*s = "Hello world!";
	char	*d;
	char	*s2 = "Hello world!";
	char	*d2;

	printf("Ft Native s = %s\n", s);
	d = strdup(s);
	printf("Ft Native d = %s\n", d);

	printf("\n");
	printf("Ma Ft s = %s\n", s2);
	d2 = ft_strdup(s);
	printf("Ma Ft d = %s\n", d2);

	return (0);
}