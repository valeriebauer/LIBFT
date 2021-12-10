/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cast.c : CHAR <= INT                        +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:08:03 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/29 10:13:45 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>


int main()
{
int i = 65;
char c = i;
printf("int i = 65 : %d | char c = i : %c \n",i,c);

int a = 'A';
c = a;
printf("int a = 'A' : %d | char c = a : %c \n", a,c);

char d = (char)i;
printf("int i = 65 : %d | char d = (char)i : %c \n",i,d);

char e = 'A';
int f = (int)e;
printf("char e = 'A' : %c | int f = (int)e : %c \n",e,f);

return (0);
}

/*
int i  = 65  : 65 | char c = i : A 
int a  = 'A' : 65 | char c = a : A 
int i  = 65  : 65 | char d = (char)i : A 
char e = 'A' :  A | int  f = (int)e : A 
*/