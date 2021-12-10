/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:00:38 by vbauer            #+#    #+#             */
/*   Updated: 2021/10/21 13:33:40 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 'c';
	char *b;
	b = &a;

//	printf("%c \n", *a);
//	printf("%c \n", a[0]);
//	printf("%s \n", a);
//	printf("%p \n", a);
	printf("%p \n", &a);


	printf("%c \n", *b);
	printf("%c \n", b[0]);
	printf("%s \n", b);
	printf("%p \n", b);
	printf("%p \n", &b);

	//int	i;

	// i = -100;
	// while (i < 201)
	// {
	// 	printf("%d / %d \n", i, tolower(i));
	// 	i++;
	// }
	return (0);
}
