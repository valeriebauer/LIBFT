//*
//************ ft_main_strlcat
//*
int	main(void)
//size_t ft_strlcat(char *dest, char *src, size_t size);
// copy src sur dest sur size
// . ATTENTION ne rien faire si size = 0v
{
	printf("size_t ft_strlcat(char *dest, char *src, size_t size);\n");

	size_t size;
	char src[]="hello world";
	char dest[]="you";
	size = 5;
	printf("size: %ld | dest: %s | src: %s\n", size, dest, src);
	printf("Ft Native : retour  %ld | dest : %s\n", strlcat( dest, src, size), dest);
	char src2[]="hello world";
	char dest2[]="you";
	printf("Ma Ft     : retour  %ld | dest : %s\n", ft_strlcat( dest2, src2, size), dest2); 
	 	
	return (0);
}