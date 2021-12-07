
//*
//************* ft_main_tolower
//*
int	main(void)
{
	int tolower_int;
	
	tolower_int = 'a';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", tolower_int, tolower(tolower_int), ft_tolower(tolower_int));

	tolower_int = '}';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", tolower_int, tolower(tolower_int), ft_tolower(tolower_int));

	tolower_int = ' ';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", tolower_int, tolower(tolower_int), ft_tolower(tolower_int));

	tolower_int = -12;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", tolower_int, tolower(tolower_int), ft_tolower(tolower_int));
	
	tolower_int = 2147483647;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", tolower_int, tolower(tolower_int), ft_tolower(tolower_int));

	tolower_int = -2147483648;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", tolower_int, tolower(tolower_int), ft_tolower(tolower_int));

	return (0);
}

