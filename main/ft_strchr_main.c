//*
//************ ft_main_strchr
//*
int	main(void)
//char *strchr(const char *s, int c);
// retourne l adresse du 1er c rencontre dans s
{
	printf("char *ft_strchr(const char *s, int c);\n");

	char s1[]="hello world";
	char s2[]="hello world";
	int c = 108; // caractere l
	printf("car: %d | s: %s \n", c, s1);
	printf("Ft Native : %s\n", strchr(s1, c));
	printf("Ma Ft     : %s\n", ft_strchr(s2, c));
	 	
	return (0);
}