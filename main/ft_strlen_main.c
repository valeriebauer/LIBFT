// *
// ************ ft_main_strlen
// *
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft.h"

int	main(void)
//size_t ft_strlen(const char *s)
//{
//	int i;
//
//	i = 0;
//	while (s[i])
//		i++;
//	return (i);
//}

{
	char *x;

	x = "coucou";
	printf("param: %s, Ft Nat: %ld, Ma Ft: %ld\n", x, strlen(x), ft_strlen(x));	
	x = "hj &^(/ jva765";
	printf("param: %s, Ft Nat: %ld, Ma Ft: %ld\n", x, strlen(x), ft_strlen(x));	
	x = "";
	printf("param: %s, Ft Nat: %ld, Ma Ft: %ld\n", x, strlen(x), ft_strlen(x));	

	return (0);
}
