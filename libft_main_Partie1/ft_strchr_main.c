//*
//************ ft_main_strchr
//*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft.h"

int	main(void)
//char *strchr(const char *s, int c);
// retourne l adresse du 1er c rencontre dans s
{
	printf("char *ft_strchr(const char *s, int c);\n");
	int c;

	char s1[]="hello world";
	char s2[]="hello world";
	c = 108; // caractere l
	printf("car: %d | s: %s \n", c, s1);
	printf("Ft Native : %s\n", strchr(s1, c));
	printf("Ma Ft     : %s\n", ft_strchr(s2, c));

	// ************** TRIPOUILLE ****************
	// char s1[] = "tripouille";
	// char s2[] = "tripouille";
	// // check(ft_strchr(s, 0) == s + strlen(s)); showLeaks();
	// printf("\n");
	// c = '\0';
	// printf("car: %d | s: %s \n", c, s1);
	// printf("Ft Native : %s\n", strchr(s1, c));
	// printf("Ma Ft     : %s\n", ft_strchr(s2, c));
	// // check(ft_strchr(s, 't' + 256) == s); showLeaks();
	// printf("\n");
	// c = 't' + 256;
	// printf("car: %d | s: %s \n", c, s1);
	// printf("Ft Native : %s\n", strchr(s1, c));
	// printf("Ma Ft     : %s\n", ft_strchr(s2, c));
	// printf("\n");
 	
	return (0);
}