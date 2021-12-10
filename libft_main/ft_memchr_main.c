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

	// char s1[]="hello world";
	// char s2[]="hello world";

// ************** TRIPOUILLE ****************
	char s1[] = {0, 1, 2 ,3 ,4 ,5};
//	char s2[] = {0, 1, 2 ,3 ,4 ,5};
	int c = 108; // caractere l
	size_t n = 0 * sizeof(char);
	printf("car: %d | s: | %s l: %ld\n", c, s1, n);
//	printf("Ft Native : %s\n", (unsigned char*)memchr(s1, 0, n));
//	printf("Ma Ft     : %s\n", (unsigned char*)ft_memchr(s2, 0, n));
	printf("Ft Native : %p\n", memchr(s1, 2 + 256, 3));
	printf("Ma Ft     : %p\n", ft_memchr(s1, 2 + 256, 3));
	 	
// 	char s1[] = {0, 1, 2 ,3 ,4 ,5};
// 	char s2[] = {0, 1, 2 ,3 ,4 ,5};
// 	printf("Ft Native : %s\n", (unsigned char *)memchr(s1, 0, 0));
// 	printf("Ma Ft     : %s\n", (unsigned char *)ft_memchr(s2, 0, 0));
// 	printf("Ma Ft     : %s\n", (char*)ft_memchr(s2, 2 + 256, 3));
	return (0);
}