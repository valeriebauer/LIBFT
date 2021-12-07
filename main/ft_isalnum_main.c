
//*
//************ ft_main_isalnum
//*
int	main(void)
{
	int isalnum_int;

	isalnum_int = 'a';
	printf("%d \n", isalnum(97));
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isalnum_int, isalnum(isalnum_int), 
		ft_isalnum(isalnum_int), ft_isalnum(isalnum_int) == isalnum(isalnum_int) ? "OK" : "KO");
	isalnum_int = 'B';
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isalnum_int, isalnum(isalnum_int), 
		ft_isalnum(isalnum_int), ft_isalnum(isalnum_int) == isalnum(isalnum_int) ? "OK" : "KO");
	isalnum_int = -3;
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isalnum_int, isalnum(isalnum_int), 
		ft_isalnum(isalnum_int), ft_isalnum(isalnum_int) == isalnum(isalnum_int) ? "OK" : "KO");
	isalnum_int = '{';
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isalnum_int, isalnum(isalnum_int), 
		ft_isalnum(isalnum_int), ft_isalnum(isalnum_int) == isalnum(isalnum_int) ? "OK" : "KO");

	return (0);
}
