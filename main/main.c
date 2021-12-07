
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c de toutes les ft de LIBFT                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauer <vbauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:00:38 by vbauer            #+#    #+#             */
/*   Updated: 2021/11/30 15:40:35 by vbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <string.h>
// #include <bsd/string.h>
#include "libft.h"

int main(void)
//*
//************ ft_main_atoi.c
//*
{
	char *atoi_str;
	
	printf("int	ft_atoi(const char *str)\n");

	atoi_str = "1234";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));

	atoi_str = "qwe";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));
	atoi_str = "-qwe";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));
	atoi_str = " qwe123";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));	
	atoi_str = " 123qwe";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));
	atoi_str = "q123we";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));	
	atoi_str = "12qwe3";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));

	atoi_str = "++1";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));
	atoi_str = "--1";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));
	atoi_str = "+-42";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));
	atoi_str = "-+42";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));
	atoi_str = "+ 9 42";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));

	atoi_str = "       ";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));

	atoi_str = "-12";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));
	
	atoi_str = "2147483647";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));

	atoi_str = "-2147483648";
	printf("Param: %s |Ft Native: %d |Ma Ft: %d\n", atoi_str, atoi(atoi_str), ft_atoi(atoi_str));

//	return (0);
//}

//*
//************ ft_main_bzero
//*
//{
// declaration NOK = segment fault !!?
//	char *a;
//	a = "valerie";
//	printf("%s\n", a);
//	bzero(a, 5, 3);

// AVEC UN TABLEAU DE CHAR mais bugg avec n > 8
	printf("Avec un tableau de CAR\n");
	char bzero_s1[]="valerie";
	char bzero_s2[]="valerie";
//	char bzero_s1[]={'a',' ',')'};
//	char bzero_s2[]={'a',' ',')'};
	size_t n = 3 * sizeof(char); 
	bzero(bzero_s1, n); 
	printf("Ft Native: %s\n", bzero_s1); 	
	ft_bzero(bzero_s2, n);
	printf("Ma ft    : %s\n", bzero_s2);

	printf("\n");
	printf("Avec un tableau d INT\n");

// AVEC UN TABLEAU D INT 
	int bzero_s3[4]={1,78,-244,0};
	int bzero_s4[4]={1,78,-244,0};
	size_t i = 0; 
	size_t m = 2 * sizeof(int); 
	bzero(bzero_s3, m);
	while (i < 4)
	{ 
		printf("Ft Native: %d\n", bzero_s3[i]);
		i++;
	}
	ft_bzero(bzero_s4, m);
	i = 0; 
	while (i < 4)
	{ 
		printf("Ma Ft: %d\n", bzero_s4[i]);
		i++;
	}

//	*** stack smashing detected ***:
//	bzero( s, '1', 9);
//	printf("%s", s);
//	Ne compile pas du fait d incompatibilite entre %s et type void* de la fct:

// 	return (0);
// }

//*
//************ ft_main_isalnum
//*
// {
	int isalnum_int;

	isalnum_int = 'a';
	printf("%d \n", isalnum(97));
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isalnum_int, isalnum(isalnum_int), 
		ft_isalnum(isalnum_int), ft_isalnum(isalnum_int) == isalnum(isalnum_int) ? "OK" : "KO");
	isalnum_int = 'B';
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isalnum_int, isalnum(isalnum_int), 
		ft_isalnum(isalnum_int), ft_isalnum(isalnum_int) == isalnum(isalnum_int) ? "OK" : "KO");
	isalnum_int = -3;
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isalnum_int, isalnum(isalnum_int), 
		ft_isalnum(isalnum_int), ft_isalnum(isalnum_int) == isalnum(isalnum_int) ? "OK" : "KO");
	isalnum_int = '{';
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isalnum_int, isalnum(isalnum_int), 
		ft_isalnum(isalnum_int), ft_isalnum(isalnum_int) == isalnum(isalnum_int) ? "OK" : "KO");

// 	return (0);
// }

//*
//************ ft_main_isalpha
//*
// {
	int isalpha_int;

	isalpha_int = 'a';
	printf("%d \n", isalpha(97));
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isalpha_int, isalpha(isalpha_int), 
		ft_isalpha(isalpha_int), ft_isalpha(isalpha_int) == isalpha(isalpha_int) ? "OK" : "KO");
	isalpha_int = 'B';
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isalpha_int, isalpha(isalpha_int), 
		ft_isalpha(isalpha_int), ft_isalpha(isalpha_int) == isalpha(isalpha_int) ? "OK" : "KO");
	isalpha_int = -3;
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isalpha_int, isalpha(isalpha_int), 
		ft_isalpha(isalpha_int), ft_isalpha(isalpha_int) == isalpha(isalpha_int) ? "OK" : "KO");

// 	return (0);
// }

//*
//************ ft_main_isascii
//*
// {
	int isascii_int;

	isascii_int = 'p';
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isascii_int, isascii(isascii_int), 
		ft_isascii(isascii_int), ft_isascii(isascii_int) == isascii(isascii_int) ? "OK" : "KO");
	isascii_int = 452;
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isascii_int, isascii(isascii_int), 
		ft_isascii(isascii_int), ft_isascii(isascii_int) == isascii(isascii_int) ? "OK" : "KO");
	isascii_int = -3;
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isascii_int, isascii(isascii_int), 
		ft_isascii(isascii_int), ft_isascii(isascii_int) == isascii(isascii_int) ? "OK" : "KO");

// 	return (0);
// }

//*
//************ ft_main_isdigit
//*
// {
	int isdigit_int;

	isdigit_int = 50; /* correspond a l entier 2 */
	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", isdigit_int, isdigit(isdigit_int), 
		ft_isdigit(isdigit_int));
	isdigit_int = '8';/* correspond a l entier 8 + 48 = 56 = 1 difit donc retourne != 0*/
	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", isdigit_int, isdigit(isdigit_int), 
		ft_isdigit(isdigit_int));
	isdigit_int = 'a';/* pas 1 digit = retourne 0 */
	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", isdigit_int, isdigit(isdigit_int), 
		ft_isdigit(isdigit_int));
	isdigit_int = 98746;
	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", isdigit_int, isdigit(isdigit_int), 
		ft_isdigit(isdigit_int));
	isdigit_int = -213;
	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", isdigit_int, isdigit(isdigit_int), 
		ft_isdigit(isdigit_int));
	
// plante :
//	isdigit_int = 2147483647;
//	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", isdigit_int, isdigit(isdigit_int), 
//		ft_isdigit(isdigit_int));

// plante :
//	isdigit_int = -2147483648;
//	printf("param: %d\n", isdigit_int);
//	printf("param: %d | Ft Native: %d\n", isdigit_int, isdigit(isdigit_int));
//	printf("param: %d | Ma Ft: %d\n", isdigit_int, ft_isdigit(isdigit_int)); 

// 	return (0);
// }

//*
//************ ft_main_isprint
//*
// {
	int isprint_int;

	isprint_int = 'a';
	printf("%d \n", isprint(97));
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isprint_int, isprint(isprint_int), 
		ft_isprint(isprint_int), ft_isprint(isprint_int) == isprint(isprint_int) ? "OK" : "KO");
	isprint_int = 9;
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isprint_int, isprint(isprint_int), 
		ft_isprint(isprint_int), ft_isprint(isprint_int) == isprint(isprint_int) ? "OK" : "KO");
	isprint_int = -3;
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isprint_int, isprint(isprint_int), 
		ft_isprint(isprint_int), ft_isprint(isprint_int) == isprint(isprint_int) ? "OK" : "KO");

// 	return (0);
// }

//*
//************ ft_main_memchr
//*
// void *ft_memchr(const void *s, int c, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	while ((((unsigned char *)s)[i]) && (i < n) && (((unsigned char *)s)[i] != c))
// 		i++;
// 	if (((unsigned char *)s)[i]) 
// 		return (&((unsigned char*)s)[i]);
// 	else
// 		return (NULL);
// }

// {
printf("void *memchr(const void *s, int c, size_t n);\n");
/* scans  the  initial n bytes of the memory area pointed to by s for the first instance of c.  
Both c and the  bytes of the memory area pointed to by s are interpreted as unsigned char */

	printf("char *ft_memchr(const char *s, int c);\n");

	char s1[]="hello world";
	char s2[]="hello world";
	int c = 108; // caractere l
	size_t n = 3 * sizeof(char);
	printf("car: %d | s: | %s l: %ld\n", c, s1, n);
	printf("Ft Native : %s\n", (char*)memchr(s1, c, n));
	printf("Ma Ft     : %s\n", (char*)ft_memchr(s2, c, n));
	 	
// 	return (0);
// }

//*
//************ ft_main_memcmp
//*
//iint memcmp(const void *s1, const void *s2, size_t n);
// retourne soustraction des @ 1ers car differents s1 - s2
// {
	printf("int memcmp(const void *s1, const void *s2, size_t n);\n");
	
	char s1[]="hello";
	char s2[]="world";
	size_t c = 3;
	//size_t c = 0;
	printf("n: %ld | s1: %s | s2: %s \n", c, s1, s2);
	printf("Ft Native : %d\n", memcmp(s1, s2, c));
	printf("Ma Ft     : %d\n", ft_memcmp(s1 ,s2, c));
	char s3[]="";
	char s4[]="";
	c = 0; // NULL
	//c = 3; // NULL
	printf("n: %ld | s3: %s | s4: %s \n", c, s3, s4);
	printf("Ft Native : %d\n", memcmp(s3, s4, c));
	printf("Ma Ft     : %d\n", ft_memcmp(s3 ,s4, c));
	 	
// 	return (0);
// }

//*
//************ ft_main_memcpy
//*
// {
printf("void *ft_memcpy(void *dest, const void *src, size_t n)\n");

// AVEC UN TABLEAU DE CHAR mais bugg avec n > 8
//	printf("Avec un tableau de CAR\n");
//	char s1[]="desti";
//	char s2[]="source";
//	char s3[]="desti";
//	char s4[]="source";
//	char s1[]={'a',' ',')'};
//	char s2[]={'a',' ',')'};
//	size_t n = 3 * sizeof(char);
//	printf("Ft Native: %s\n", (char *)memcpy(s1 + 2, s1, n)); // pour simuler le chevauchement
//	printf("Ma Ft    : %s\n", (char *)ft_memcpy(s3 + 2, s3, n));
//	printf("Ft Native: %s\n", (char *)memcpy(s1, s2, n));
//otre nom, prénom, identifiant Pôle Emploi (complet, merci de bien vérifier) et localité de votre agence	printf("Ma Ft    : %s\n", (char *)ft_memcpy(s3, s4, n));
//	printf("Ft Native: %s\n", (char *)memcpy(s1 + 2, s1, n));
//	printf("Ma Ft    : %s\n", (char *)ft_memcpy(s3 + 2, s3, n));
//	ft_memmove(s3 + 2, s3, n);
//	printf("Ma ft    : %s\n", s3);

//	printf("Avec un tableau d INT\n");

// AVEC UN TABLEAU D INT 
// RESULTAT : les 4 elts du tableau DEST sont remplaces par ceux de SRC alors que n = 2 ???
	int s1[4]={1,78,-244,0};
	int s2[4]={99,3,243,66};
	size_t i = 0; 
	size_t m = 2 * sizeof(int); // ou passer directement 8 en param car 1 int = 4 octets
	//size_t m = 8;
	(int *)memcpy(s1, s2, m);// remplace 1er elt du tableau par 808464432	(et non 0)
	while (i < 4)
	{ 
		printf("Ft Native: %d\n", s1[i]);
		i++;
	}
	int s3[4]={1,78,-244,0};
	int s4[4]={99,3,243,66};
	(int *)ft_memcpy(s3, s4, m);// 20 = 1 CAR non imprimable, affiche 336860180  
	i = 0; 
	while (i < 4)
	{ 
		printf("Ma Ft: %d\n", s3[i]);
		i++;
	}
// 	return (0);
// }

//*
//************ ft_main_memmove
//*
// {
printf("void *memmove(void *dest, const void *src, size_t n);\n");
// si dest > src cad dest stocke apres src dans la memoire, on remplace par la fin sinon ecrasement
// AVEC UN TABLEAU DE CHAR mais bugg avec n > 8
	printf("Avec un tableau de CAR\n");
	char s1[]="desti";
	char s2[]="source";
	char s3[]="desti";
	char s4[]="source";
//	char s1[]={'a',' ',')'};
//	char s2[]={'a',' ',')'};
	size_t n = 3 * sizeof(char); // POUR ASSURER LA PORTABILITE mais pas utile pour des CAR
	printf("Ft Native: %s\n", (char *)memmove(s1, s2, n));
	printf("Ma Ft    : %s\n", (char *)ft_memmove(s3, s4, n));
//	printf("Ft Native: %s\n", (char *)memmove(s1 + 2, s1, n)); // s1 + 2 octets pour creer chevauchement
//	printf("Ft Native: %s\n", (char *)memmove(s1 + 2, s1, n));
//	printf("Ma Ft    : %s\n", (char *)ft_memmove(s3 + 2, s3, n));
//	ft_memmove(s3 + 2, s3, n);
//	printf("Ma ft    : %s\n", s3);

//	printf("Avec un tableau d INT\n");

// AVEC UN TABLEAU D INT 
//	int s3[4]={1,78,-244,0};
//	int s4[4]={1,78,-244,0};
//	size_t i = 0; 
//	size_t m = 2 * sizeof(int); 
//	memmove(s3, '0', m);// remplace 1er elt du tableau par 808464432	(et non 0)
//	while (i < 4)
//	{ 
//		printf("Ft Native: %d\n", s3[i]);
//		i++;
//	}
//	ft_memmove(s4, '0', m);// 20 = 1 CAR non imprimable, affiche 336860180  
//	i = 0; 
//	while (i < 4)
//	{ 
//		printf("Ma Ft: %d\n", s4[i]);
//		i++;
//	}
// 	return (0);
// }

//*
//************ ft_main_memset
//*
// {
	printf("void *memset(void *s, int c, size_t n);\n");
	/*
	fills the first n bytes of the memory area pointed to by s with the constant byte c
	*/
// declaration NOK = segment fault !!?
//	char *a;
//	a = "valerie";
//	printf("%s\n", a);
//	memset(a, 5, 3);

// AVEC UN TABLEAU DE CHAR mais bugg avec n > 8
	printf("Avec un tableau de CAR\n");
	char s1[]="valerie";
	char s2[]="valerie";
//	char s1[]={'a',' ',')'};
//	char s2[]={'a',' ',')'};
	size_t n = 3 * sizeof(char); 
//	memset((void *)s1, 'z', n);	
	memset(s1, 'z', n); 
	printf("Ft Native: %s\n", s1); 	
	ft_memset(s2, 'z', n);
	printf("Ma ft    : %s\n", s2);

	printf("\n");
	printf("Avec un tableau d INT\n");

// AVEC UN TABLEAU D INT 
	int s3[4]={1,78,-244,0};
	int s4[4]={1,78,-244,0};
	size_t i = 0; 
	size_t m = 2 * sizeof(int); // instruction facultative car 1 CAR 1 octet qq systeme
	memset(s3, '0', m);// remplace 1er elt du tableau par 808464432	(et non par 0)
	while (i < 4)
	{ 
		printf("Ft Native: %d\n", s3[i]);
		i++;
	}
	ft_memset(s4, 20, m);// 20 = 1 CAR non imprimable, affiche 336860180  
	i = 0; 
	while (i < 4)
	{ 
		printf("Ma Ft: %d\n", s4[i]);
		i++;
	}

//	*** stack smashing detected ***:
//	memset( s, '1', 9);
//	printf("%s", s);
//	Ne compile pas du fait d incompatibilite entre %s et type void* de la fct:

// 	return (0);
// }

//*
//************ ft_main_strchr
//*
//char *strchr(const char *s, int c);
// retourne l adresse du 1er c rencontre dans s
{
	printf("char *ft_strchr(const char *s, int c);\n");

	char s1[]="hello world";
	char s2[]="hello world";
	int c = 108; // caractere l
	printf("car: %d | s: %s \n", c, s1);
	printf("Ft Native : %s\n", strchr(s1, c));
	printf("Ma Ft     : %s\n", ft_strchr(s2, c));
	 	
// 	return (0);
// }

//*
//************ ft_main_strlcat
//*
//size_t ft_strlcat(char *dest, char *src, size_t size);
// copy src sur dest sur size
// . ATTENTION ne rien faire si size = 0v
// {
	printf("size_t ft_strlcat(char *dest, char *src, size_t size);\n");

	size_t size;
	char src[]="hello world";
	char dest[]="you";
	size = 5;
	printf("size: %ld | dest: %s | src: %s\n", size, dest, src);
	printf("Ft Native : retour  %ld | dest : %s\n", strlcat( dest, src, size), dest);
	char src2[]="hello world";
	char dest2[]="you";
	printf("Ma Ft     : retour  %ld | dest : %s\n", ft_strlcat( dest2, src2, size), dest2); 
	 	
// 	return (0);
// }

//*
//************ ft_main_strlcpy
//*
//size_t ft_strlcpy(char *dest, char *src, size_t size);
// copy src sur dest sur size
// . ATTENTION ne rien faire si size = 0
// {
	printf("size_t ft_strlcpy(char *dest, char *src, size_t size);\n");

	size_t size;
	char src[]="hello world";
	char dest[]="you";
	size = 5;
	printf("size: %ld | dest: %s | src: %s\n", size, dest, src);
	printf("Ft Native : retour  %ld | dest : %s\n", strlcpy( dest, src, size), dest);
	char src2[]="hello world";
	char dest2[]="you";
	printf("Ma Ft     : retour  %ld | dest : %s\n", ft_strlcpy( dest2, src2, size), dest2); 
	 	
// 	return (0);
// }

// *
// ************ ft_main_strlen
// *
// {
	char *x;

	x = "coucou";
	printf("param: %s, Ft Nat: %ld, Ma Ft: %ld\n", x, strlen(x), ft_strlen(x));	
	x = "hj &^(/ jva765";
	printf("param: %s, Ft Nat: %ld, Ma Ft: %ld\n", x, strlen(x), ft_strlen(x));	
	x = "";
	printf("param: %s, Ft Nat: %ld, Ma Ft: %ld\n", x, strlen(x), ft_strlen(x));	

// 	return (0);
// }

//*
//************ ft_main_strncmp
//*
//int ft_strncmp(const char *s1, const char *s2, size_t n);
// retourne soustraction des @ 1ers car differents s1-s2
// {
	printf("int ft_strncmp(const char *s1, const char *s2, size_t n);\n");
	
	char s1[]="hello";
	char s2[]="world";
	size_t c = 3;
	//size_t c = 0;
	printf("n: %ld | s1: %s | s2: %s \n", c, s1, s2);
	printf("Ft Native : %d\n", strncmp(s1, s2, c));
	printf("Ma Ft     : %d\n", ft_strncmp(s1 ,s2, c));
	char s3[]="";
	char s4[]="";
	c = 0; // NULL
	//c = 3; // NULL
	printf("n: %ld | s3: %s | s4: %s \n", c, s3, s4);
	printf("Ft Native : %d\n", strncmp(s3, s4, c));
	printf("Ma Ft     : %d\n", ft_strncmp(s3 ,s4, c));
	 	
// 	return (0);
// }

//*
//************ ft_main_strrchr
//*
//char *strrchr(const char *s, int c);
// retourne l adresse du dernier c rencontre dans s
// {
	printf("char *ft_strrchr(const char *s, int c);\n");
	
	char s1[]="hello world";
	char s2[]="hello world";
	int c = 108; // caractere l
	//char s1[]="";
	//char s2[]="";
	//int c = 0; // NULL
	printf("car: %d | s: %s \n", c, s1);
	printf("Ft Native : %s\n", strrchr(s1, c));
	printf("Ma Ft     : %s\n", ft_strrchr(s2, c));
	 	
// 	return (0);
// }

//*
//************* ft_main_tolower
//*
// {
	int tolower_int;
	
	tolower_int = 'a';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", tolower_int, tolower(tolower_int), ft_tolower(tolower_int));

	tolower_int = '}';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", tolower_int, tolower(tolower_int), ft_tolower(tolower_int));

	tolower_int = ' ';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", tolower_int, tolower(tolower_int), ft_tolower(tolower_int));

	tolower_int = -12;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", tolower_int, tolower(tolower_int), ft_tolower(tolower_int));
	
	tolower_int = 2147483647;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", tolower_int, tolower(tolower_int), ft_tolower(tolower_int));

	tolower_int = -2147483648;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", tolower_int, tolower(tolower_int), ft_tolower(tolower_int));

// 	return (0);
// }

//*
//************* ft_main_toupper
//*
// {
	int toupper_int;
	
	toupper_int = 'a';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", toupper_int, toupper(toupper_int), ft_toupper(toupper_int));

	toupper_int = '}';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", toupper_int, toupper(toupper_int), ft_toupper(toupper_int));

	toupper_int = ' ';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", toupper_int, toupper(toupper_int), ft_toupper(toupper_int));

	toupper_int = -12;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", toupper_int, toupper(toupper_int), ft_toupper(toupper_int));
	
	toupper_int = 2147483647;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", toupper_int, toupper(toupper_int), ft_toupper(toupper_int));

	toupper_int = -2147483648;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", toupper_int, toupper(toupper_int), ft_toupper(toupper_int));

	return (0);
}
//*
//************* ft_main_toupper
//*
{
	printf("char	*ft_strnstr(const char *s1, const char *s2, size_t len);\n\n");
	
	char s1[]="hello world";
	char s2[]="llo";

	int c = -2;
	while (c < 14)
	{
	printf("n: %d | s1: %s | s2: %s \n", c, s1, s2);
	printf("Ft Native : %s\n", strnstr(s1, s2, c));
	printf("Ma Ft     : %s\n\n", ft_strnstr(s1 ,s2, c));
	c++;
	}
	return (0);
}
