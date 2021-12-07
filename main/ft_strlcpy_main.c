//*
//************ ft_main_strlcpy
//*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft.h"

int	main(void)
//size_t ft_strlcpy(char *dest, char *src, size_t size);
// copy src sur dest sur size
// . ATTENTION ne rien faire si size = 0
{
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
	 	
	return (0);
}
