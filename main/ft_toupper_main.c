//*
//************* ft_main_toupper
//*
int	main(void)
{
	int toupper_int;
	
	toupper_int = 'a';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", toupper_int, toupper(toupper_int), ft_toupper(toupper_int));

	toupper_int = '}';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", toupper_int, toupper(toupper_int), ft_toupper(toupper_int));

	toupper_int = ' ';
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", toupper_int, toupper(toupper_int), ft_toupper(toupper_int));

	toupper_int = -12;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", toupper_int, toupper(toupper_int), ft_toupper(toupper_int));
	
	toupper_int = 2147483647;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", toupper_int, toupper(toupper_int), ft_toupper(toupper_int));

	toupper_int = -2147483648;
	printf("Param: %d |Ft Native: %d |Ma Ft: %d\n", toupper_int, toupper(toupper_int), ft_toupper(toupper_int));

	return (0);
}

