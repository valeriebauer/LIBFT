//*
//************ ft_main_strrchr
//*
int	main(void)
//char *strrchr(const char *s, int c);
// retourne l adresse du dernier c rencontre dans s
{
	printf("char *ft_strrchr(const char *s, int c);\n");
	
	char s1[]="hello world";
	char s2[]="hello world";
	int c = 108; // caractere l
	//char s1[]="";
	//char s2[]="";
	//int c = 0; // NULL
	printf("car: %d | s: %s \n", c, s1);
	printf("Ft Native : %s\n", strrchr(s1, c));
	printf("Ma Ft     : %s\n", ft_strrchr(s2, c));
	 	
	return (0);
}