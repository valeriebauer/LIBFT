//*
//************ ft_main_memchr
//*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft.h"

int	main(void)
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

{
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
	 	
	return (0);
}