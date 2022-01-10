
//*
//************ ft_main_isascii
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

	return (0);
}
