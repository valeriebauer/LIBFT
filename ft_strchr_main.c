
//#include <bsd/string.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>
#include <stddef.h>

//char *strchr(const char *s, int c);
// retourne l adresse du 1er c rencontre dans s
int	main(void)
{
	printf("char *ft_strchr(const char *s, int c);\n");

	char s1[]="hello world";
	char s2[]="hello world";
	int c = 108; // caractere l
	printf("car: %d | s: %s \n", c, s1);
	printf("Ft Native : %s\n", strchr(s1, c));
	printf("Ma Ft     : %s\n", ft_strchr(s2, c));
	 	
	return (0);
}