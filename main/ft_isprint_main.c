//*
//************ ft_main_isprint
//*
int	main(void)
{
	int isprint_int;

	isprint_int = 'a';
	printf("%d \n", isprint(97));
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isprint_int, isprint(isprint_int), 
		ft_isprint(isprint_int), ft_isprint(isprint_int) == isprint(isprint_int) ? "OK" : "KO");
	isprint_int = 9;
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isprint_int, isprint(isprint_int), 
		ft_isprint(isprint_int), ft_isprint(isprint_int) == isprint(isprint_int) ? "OK" : "KO");
	isprint_int = -3;
	printf("param: %d | Ft Native: %d | Ma Ft: %d | %s\n", isprint_int, isprint(isprint_int), 
		ft_isprint(isprint_int), ft_isprint(isprint_int) == isprint(isprint_int) ? "OK" : "KO");

	return (0);
}
