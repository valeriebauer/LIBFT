//*
//************ ft_main_isalpha
//*
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
