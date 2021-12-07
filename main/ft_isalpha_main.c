//*
//************ ft_main_isalpha
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
	int isalpha_int;

	isalpha_int = 'a';
	printf("%d \n", isalpha(97));
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isalpha_int, isalpha(isalpha_int), 
		ft_isalpha(isalpha_int), ft_isalpha(isalpha_int) == isalpha(isalpha_int) ? "OK" : "KO");
	isalpha_int = 'B';
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isalpha_int, isalpha(isalpha_int), 
		ft_isalpha(isalpha_int), ft_isalpha(isalpha_int) == isalpha(isalpha_int) ? "OK" : "KO");
	isalpha_int = -3;
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isalpha_int, isalpha(isalpha_int), 
		ft_isalpha(isalpha_int), ft_isalpha(isalpha_int) == isalpha(isalpha_int) ? "OK" : "KO");

	return (0);
}
