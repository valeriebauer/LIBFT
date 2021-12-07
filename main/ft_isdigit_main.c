
//*
//************ ft_main_isdigit
//*
int	main(void)
{
	int isdigit_int;

	isdigit_int = 50; /* correspond a l entier 2 */
	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", isdigit_int, isdigit(isdigit_int), 
		ft_isdigit(isdigit_int));
	isdigit_int = '8';/* correspond a l entier 8 + 48 = 56 = 1 difit donc retourne != 0*/
	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", isdigit_int, isdigit(isdigit_int), 
		ft_isdigit(isdigit_int));
	isdigit_int = 'a';/* pas 1 digit = retourne 0 */
	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", isdigit_int, isdigit(isdigit_int), 
		ft_isdigit(isdigit_int));
	isdigit_int = 98746;
	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", isdigit_int, isdigit(isdigit_int), 
		ft_isdigit(isdigit_int));
	isdigit_int = -213;
	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", isdigit_int, isdigit(isdigit_int), 
		ft_isdigit(isdigit_int));
	
// plante :
//	isdigit_int = 2147483647;
//	printf("param: %d | Ft Native: %d | Ma Ft: %d\n", isdigit_int, isdigit(isdigit_int), 
//		ft_isdigit(isdigit_int));

// plante :
//	isdigit_int = -2147483648;
//	printf("param: %d\n", isdigit_int);
//	printf("param: %d | Ft Native: %d\n", isdigit_int, isdigit(isdigit_int));
//	printf("param: %d | Ma Ft: %d\n", isdigit_int, ft_isdigit(isdigit_int)); 

	return (0);
}
