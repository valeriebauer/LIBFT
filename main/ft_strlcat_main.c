//*
//************ ft_main_strlcat
//*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft.h"

int	main(void)
//size_t ft_strlcat(char *dest, char *src, size_t size);
// copy src sur dest sur size
// . ATTENTION ne rien faire si size = 0v
{
	printf("size_t ft_strlcat(char *dest, char *src, size_t size);\n");

	// size_t size;
	// // char src[]="hello world";
	// // char dest[]="you";
	// // size = 5;
	// printf("size: %ld | dest: %s | src: %s\n", size, dest, src);
	// printf("Ft Native : retour  %ld | dest : %s\n", strlcat( dest, src, size), dest);
	// char src2[]="hello world";
	// char dest2[]="you";
	// printf("Ma Ft     : retour  %ld | dest : %s\n", ft_strlcat( dest2, src2, size), dest2); 

	// ************** TRIPOUILLE ****************
	char *src1 = (char *)"AAAAAAAAA";
	char dest1[3]; 
	memset(dest1, 0, 3);
	dest1[0] = 'B';
	char *src2 = (char *)"AAAAAAAAA";
	char dest2[1]; 
	memset(dest2, 0, 3);
	dest2[0] = 'B';
	//check(ft_strlcat(dest, src, 1)
	// printf("\n");
	// printf("Ft Native : strlcat  %ld | dest : %s\n", strlcat( dest1, src1, 1), dest1);
	// printf("Ma Ft  : ft_strlcat  %ld | dest : %s\n", ft_strlcat( dest2, src2, 1), dest2);
	//check(ft_strlcat(dest, src, 3)
	printf("\n");
	printf("Ft Native : strlcat  %ld | dest : %s\n", strlcat( dest1, src1, 3), dest1);
	printf("Ma Ft  : ft_strlcat  %ld | dest : %s\n", ft_strlcat( dest2, src2, 3), dest2);
	//check(ft_strlcat(dest, src, 6)
	// printf("\n");
	// printf("Ft Native : strlcat  %ld | dest : %s\n", strlcat( dest1, src1, 6), dest1);
	// printf("Ma Ft  : ft_strlcat  %ld | dest : %s\n", ft_strlcat( dest2, src2, 6), dest2);
	// // check(ft_strlcat(dest, src, -1) 
	// printf("\n");
	// printf("Ft Native : strlcat  %ld | dest : %s\n", strlcat( dest1, src1, -1), dest1);
	// printf("Ma Ft  : ft_strlcat  %ld | dest : %s\n", ft_strlcat( dest2, src2, -1), dest2);
	// // check(ft_strlcat(dest, src, 17)
	// printf("\n");
	// printf("Ft Native : strlcat  %ld | dest : %s\n", strlcat( dest1, src1, 17), dest1);
	// printf("Ma Ft  : ft_strlcat  %ld | dest : %s\n", ft_strlcat( dest2, src2, 17), dest2);

	return (0);
}