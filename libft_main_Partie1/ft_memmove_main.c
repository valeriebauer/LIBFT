//*
//************ ft_main_memmove
//*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft.h"

int	main(void)
{
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
	return (0);
}
