
#include <stdio.h>
#include <string.h>
#include "../libft.h"
#include <ctype.h>
#include <stddef.h>
#include <stdlib.h>
#include <bsd/string.h>

// retourne @ de s2 trouvee dans s1 sur n
int	main(void)
{
	printf("char	*ft_strnstr(const char *s1, const char *s2, size_t len);\n\n");
	
	//char s1[]="";
	char s1[]="hello world";
	char s2[]="ello";

	// int c = -2;
	// while (c < 14)
	// {
	// printf("n: %d | s1: %s | s2: %s \n", c, s1, s2);
	// printf("Ft Native : %s\n", strnstr(s1, s2, c));
	// printf("Ma Ft     : %s\n\n", ft_strnstr(s1 ,s2, c));
	// c++;
	// }
	size_t c = 0;
	printf("n: %ld | s1: %s | s2: %s \n", c, s1, s2);
	printf("Ft Native : %s\n", strnstr(s1, s2, c));
	printf("Ma Ft     : %s\n", ft_strnstr(s1 ,s2, c));
	c = 3;
	printf("n: %ld | s1: %s | s2: %s \n", c, s1, s2);
	printf("Ft Native : %s\n", strnstr(s1, s2, c));
	printf("Ma Ft     : %s\n", ft_strnstr(s1 ,s2, c));
	c = 4;
	printf("n: %ld | s1: %s | s2: %s \n", c, s1, s2);
	printf("Ft Native : %s\n", strnstr(s1, s2, c));
	printf("Ma Ft     : %s\n", ft_strnstr(s1 ,s2, c));
	c = 5;
	printf("n: %ld | s1: %s | s2: %s \n", c, s1, s2);
	printf("Ft Native : %s\n", strnstr(s1, s2, c));
	printf("Ma Ft     : %s\n", ft_strnstr(s1 ,s2, c));

	char s3[]="";
	char s4[]="";
	c = 0; // NULL
	printf("n: %ld | s3: %s | s4: %s \n", c, s3, s4);
	printf("Ft Native : %s\n", strnstr(s3, s4, c));
	printf("Ma Ft     : %s\n", ft_strnstr(s3 ,s4, c));
	c = 3;
	printf("n: %ld | s3: %s | s4: %s \n", c, s3, s4);
	printf("Ft Native : %s\n", strnstr(s3, s4, c));
	printf("Ma Ft     : %s\n", ft_strnstr(s3 ,s4, c));	 	
	return (0);
}