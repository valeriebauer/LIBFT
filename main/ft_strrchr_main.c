//*
//************ ft_main_strrchr
//*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft.h"

int	main(void)
//char *strrchr(const char *s, int c);
// retourne l adresse du dernier c rencontre dans s
{
	printf("\n");
	printf("char *ft_strrchr(const char *s, int c);\n");
	
	// char s1[]="hello world";
	// char s2[]="hello world";
	 int c;
	// c = 108; // caractere l
	// // char s1[]="";
	// // char s2[]="";
	// // c = 0; // NULL
	// printf("car: %d | s: %s | s: %s\n", c, s1, s2);
	// printf("Ft Native : %s\n", strrchr(s1, c));
	// printf("Ma Ft     : %s\n", ft_strrchr(s2, c));
	
// ************** TRIPOUILLE ****************
	char s1[] = "tripouille";
	char s2[] = "ltripouiel";
	c = 't';
	printf("\n");
	// check(ft_strrchr(s, 't') == s); showLeaks();
	printf("car: %d | s1: %s\n", c, s1);
	printf("Ft Native : %s\n", strrchr(s1, c));
	printf("Ma Ft     : %s\n", ft_strrchr(s1, c));
	printf("car: %d | s2: %s\n", c, s2);
	printf("Ft Native : %s\n", strrchr(s2, c));
	printf("Ma Ft     : %s\n", ft_strrchr(s2, c));

	// check(ft_strrchr(s, 't' + 256) == s); showLeaks();
	c = 't' + 256;
	printf("\n");
	printf("car: %d | s1: %s\n", c, s1);
	printf("Ft Native : %s\n", strrchr(s1, c));
	printf("Ma Ft     : %s\n", ft_strrchr(s1, c));
	printf("car: %d | s2: %s\n", c, s2);
	printf("Ft Native : %s\n", strrchr(s2, c));
	printf("Ma Ft     : %s\n", ft_strrchr(s2, c));
	return (0);
}