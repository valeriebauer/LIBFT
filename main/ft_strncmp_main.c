//*
//************ ft_main_strncmp
//*
int	main(void)
//int ft_strncmp(const char *s1, const char *s2, size_t n);
// retourne soustraction des @ 1ers car differents s1-s2
{
	printf("int ft_strncmp(const char *s1, const char *s2, size_t n);\n");
	
	char s1[]="hello";
	char s2[]="world";
	size_t c = 3;
	//size_t c = 0;
	printf("n: %ld | s1: %s | s2: %s \n", c, s1, s2);
	printf("Ft Native : %d\n", strncmp(s1, s2, c));
	printf("Ma Ft     : %d\n", ft_strncmp(s1 ,s2, c));
	char s3[]="";
	char s4[]="";
	c = 0; // NULL
	//c = 3; // NULL
	printf("n: %ld | s3: %s | s4: %s \n", c, s3, s4);
	printf("Ft Native : %d\n", strncmp(s3, s4, c));
	printf("Ma Ft     : %d\n", ft_strncmp(s3 ,s4, c));
	 	
	return (0);
}